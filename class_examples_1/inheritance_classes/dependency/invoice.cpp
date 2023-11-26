/***************************************************************
 * The implementation file for Invoice class 		 		 *
 ***************************************************************/

    #include "invoice.h"

    // Constructor
    Invoice :: Invoice(int invNum)
    : invoiceNumber (invNum), invoiceTotal (0.0)
    {
    }

    // Destructor
    Invoice :: ~Invoice()
    {
    }

    // Add member function
    void Invoice :: add(int quantity, Product product)
    {
        invoiceTotal += quantity * product.getPrice();
    }

    // Print member function
    void Invoice :: print() const
    {
        cout << "Invoice Number: " << invoiceNumber << endl;
        cout << "Invoice Total: " << invoiceTotal << endl;
    }
