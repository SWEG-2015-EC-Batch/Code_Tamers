//This is Project 2
#include <iostream>
using namespace std;
const int NUM_SALESPERSONS = 4;
const int NUM_PRODUCTS = 5;
int main()
{
    // Initialize sales array to zero
    double sales[NUM_SALESPERSONS][NUM_PRODUCTS] = {0};
    int salesperson,product;
    double amount,bonus,sales_amount;
    char c_d,c_sp;//c_d is the choice of display and c_sp is the choice of salesperson or product
    // Entry of sales data for the month
    while (true) {
        cout << "Enter salesperson number (1 to 4, 0 to quit): ";
        cin >> salesperson;
        if (salesperson == 0) {
            break;
        }
        cout << "Enter product number (1 to 5): ";
        cin >> product;
        cout << "Enter total Birr value of product sold: ";
        cin >> amount;
        // Update sales array
        sales[salesperson - 1][product - 1] += amount;
        
    }
     // Print row cross totals
    cout << "Total"<<"\t\t";
     for (int product = 1; product <= NUM_PRODUCTS; product++) {
        double product_total=0;
        for (int salesperson = 1; salesperson <= NUM_SALESPERSONS; salesperson++) {
            product_total += sales[salesperson - 1][product - 1];
        }
        cout << product_total<<"\t\t";
    }
    cout << grand_total << endl;
    cout<<"--------------------------------------------------------------------------------------------------\n";
    }
    else if (s_p=='y' || s_p=='Y'){
        cout<<"which salesperson would you like to know about?\n";
        cout << "Enter salesperson number (1 to 4): ";
        cin >> salesperson;
        cout<<"_ _ _\n\n";
        cout<<"salesperson "<<salesperson<<"got the following amount from each product:\n";
        for(product=1;product<=NUM_PRODUCTS;product++){
            double pn=sales[salesperson-1][product-1];//pn is product number
            cout<<"product "<<product<<" total="<<pn<<"ETB"<<endl;
        }
        double pn_total=sales[salesperson-1][0]+sales[salesperson-1][1]+sales[salesperson-1][2]+sales[salesperson-1][3]+sales[salesperson-1][4];
        cout<<"total value of product sold by salesperson"<<salesperson<<"= "<<pn_total<<"ETB\n";
        double bonus = 0.05*pn_total;
    

    
