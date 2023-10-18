#include <iostream>

using namespace std;

int main(){
    double sales = 95000;
    const double state_tax_percentage = 0.04;
    double state_tax = sales * state_tax_percentage;
    const double county_tax_percentage = 0.02;
    double county_tax = sales * county_tax_percentage;
    double total_tax = state_tax + county_tax;
    cout << "Total sales: " << sales << endl
         << "State tax: " << state_tax << endl
         << "County tax: " << county_tax << endl
         << "Total tax: " << total_tax;
    return 0;
}