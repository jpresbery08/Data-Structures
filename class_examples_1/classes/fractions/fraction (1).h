/***************************************************************
 * The interface file fraction.h defining the class Fraction   *
***************************************************************/
#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

    class Fraction
    {
        // Data members
        private:
            int numer;
            int denom;

        // Public member functions
        public:
            // Constructors
            Fraction(int num, int den);
            Fraction();
            Fraction(const Fraction& fract);
            ~Fraction();
            // Accessors
            int getNumer() const;
            int getDenom() const;
            void print() const;
            // Mutators
            void setNumer(int num);
            void setDenom(int den);

        // Helping private member functions
        private:
            void normalize();
            int gcd(int n, int m);
    };

#endif
