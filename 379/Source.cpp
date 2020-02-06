#include <iostream>

using namespace std;
/*  tax bracket
    10,000      0%              WORKING PROGRAM, UPDATE TAX BRACKET WITH REAL NUMBERS
    30,000      10%
    100,000     25%
    >100,000    40%     */    

int main()
{
    //variables
    int inc;
    int tax;

    //initial question prompt
    cout << "What is your yearly income?" << endl;
    cin >> inc;

    //if income is below 10,000 then no tax
    if (inc <= 10000) {
        tax = 0;
        cout << "Your yearly tax is " << tax << endl;
    }

    // if income is between 10000 and 30000
    else if (inc > 10000 & inc <= 30000) {
        tax = .1 * (inc - 10000);
        cout << "Your yearly tax is " << tax << endl;
    }

    // if income is between 30,000 and 100,000
    else if (inc > 30000 & inc <= 100000) {
        tax = 0.1 * (20000) + 0.25 * (inc - 30000);
        cout << "Your yearly tax is " << tax << endl;
    }

    // if income is greater than 100,000
    else if (inc > 100000) {
        tax = 0.1 * (20000) + 0.25 * (100000 - 30000) + 0.4 * (inc - 100000);
        cout << "Your yearly tax is " << tax << endl;
    }

    return 0;
}