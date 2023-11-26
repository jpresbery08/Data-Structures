/***************************************************************
 * The implementation file for Product class 		 		 *
 ***************************************************************/

    #include "product.h"

    // Constructor
    Product :: Product(string nm, double up)
    : name (nm), unitPrice (up)
    {
    }

    // Destructor
    Product :: ~Product()
    {
    }

    // The getPrice member function
    double Product :: getPrice() const
    {
        return unitPrice;
    }
