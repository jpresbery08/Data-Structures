/***************************************************************
 * The application file to test the Invoice class 		 	 *
 ***************************************************************/

    #include "invoice.h"

    int main()
    {
        // Instantiation of two products
        Product product1("Table", 150.00);
        Product product2("Chair", 80.00);

        // Creation of invoice for the two product
        Invoice invoice(1001);
        invoice.add(1, product1);
        invoice.add(6, product2);
        invoice.print();

        return 0;
    }
