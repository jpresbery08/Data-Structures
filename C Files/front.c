/*  front.c - a lexical analyzer system for simple arithmetic expressions   */

#include <stdio.h>
#include <ctype.h>

/*  Global Declarations */

    /*  Variables   */
    int charClass;
    char lexeme[100];
    char nextChar;
    int lexLen;
    int token;
    int nextToken;
    FILE *in_fp, *fopen();

    /*  Function Decalarations  */
    void addChar();
    void getChar();
    void getNonBlank();
    int lex();

    /*  Character Classes   */
    #define LETTER 0
    #define DIGIT 1
    #define UNKNOWN 99

    /*  Token Codes */
    #define INT_LIT 10
    #define IDENT 11
    #define ASSIGN_OP 20
    #define ADD_OP 21
    #define SUB_OP 22
    #define MULT_OP 23
    #define DIV_OP 24
    #define LEFT_PAREN 25
    #define RIGHT_PAREN 26

    /*************************************************************/

    /*  Main Driver */
    int main()
    {
        /*  Open the Input Data File and Process its Contents   */
        if ((in_fp = fopen("front.in","r")) == NULL)
            printf("Error - Cannot Open Input File \n");
        else
        {
            getChar();
            do
            {
                    lex();
            } while (nextToken != EOF);
        }
    }

    /*************************************************************/

    /*  lookup - a function to lookup operators and parentheses
                and return the token    */

    int lookup(char ch)
    {
        switch (ch)
        {
            case '(':
                addChar();
                nextToken = LEFT_PAREN;
                break;

            case ')':
                addChar();
                nextToken = RIGHT_PAREN;
                break;

            case '+':
                addChar();
                nextToken = ADD_OP;
                break;

            case '-':
                addChar();
                nextToken = SUB_OP;
                break;

            case '*':
                addChar();
                nextToken = MULT_OP;
                break;

            case '/':
                addChar();
                nextToken = DIV_OP;
                break;

            default:
                addChar();
                nextToken = EOF;
                break;
        }

        return nextToken;
    }

    /*************************************************************/

    /*  addChar - A Function to Add nextChar to lexeme  */

    void addChar()
    {
        if (lexLen <= 98)
        {
            lexeme[lexLen++] = nextChar;
            lexeme[lexLen] = 0;
        }
        else
            printf("Error - lexeme is too long \n");
    }

    /*************************************************************/

    /*  A function to get the next character of input and determine
        its character class */

    void getChar()
    {
        if ((nextChar = getc(in_fp)) != EOF)
        {
            if (isalpha(nextChar))
                charClass = LETTER;
            else if (isdigit(nextChar))
                charClass = DIGIT;
            else charClass = UNKNOWN;
        }
        else
            charClass = EOF;
    }

    /*************************************************************/

    /*  getNonBlank - A function to call getChar until it returns a
        non-whitespace character    */

    void getNonBlank()
    {
        while (isspace(nextChar))
            getChar();
    }

    /*************************************************************/

    /*  lex - a simple lexeme analyzer for arithmetic expression    */

    int lex()
    {
        lexLen = 0;
        getNonBlank();

        switch (charClass)
        {
            /*  Parse Identifiers   */
            case LETTER:
                addChar();
                getChar();
                while (charClass == LETTER || charClass == DIGIT)
                {
                    addChar();
                    getChar();
                }
                nextToken = IDENT;
                break;

            /*  Parse Integer Literals   */
            case DIGIT:
                addChar();
                getChar();
                while (charClass == DIGIT)
                {
                    addChar();
                    getChar();
                }
                nextToken = INT_LIT;
                break;

            /*  Parentheses and Operators   */
            case UNKNOWN:
                lookup(nextChar);
                getChar();
                break;

            /*  EOF   */
            case EOF:
                nextToken = EOF;
                lexeme[0] = 'E';
                lexeme[1] = 'O';
                lexeme[2] = 'F';
                lexeme[3] = 0;
                break;
        }

        printf("Next Token is: %d, Next Lexeme is %s \n", nextToken, lexeme);
        return nextToken;

    }
