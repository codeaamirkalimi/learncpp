#include <iostream>

using namespace std;

int main() {
    int sales = 95000;
    const double STATE_TAX = 0.04;
    const double COUNTRY_TAX = 0.02;

    double totalStateTax = STATE_TAX * sales;
    double totalCountryTax = COUNTRY_TAX * sales;
    double calculateTotalTax = sales - (totalStateTax + totalCountryTax);

    cout << "Sales = $" << sales << endl
         << "State Tax = $" << totalStateTax << endl
         << "Country Tax = $" << totalCountryTax << endl
         << "Total Profit = $" << calculateTotalTax << endl;
    return 0;
}