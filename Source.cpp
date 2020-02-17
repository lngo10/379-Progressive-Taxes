#include <iostream>
using namespace std;
void taxcalculation(double, double, double, double, double, double, double);
class Bracket { public: double b1, b2, b3, b4, b5, b6; };
int main() {
    double inc, b1, b2, b3, b4, b5, b6;     //variables
    int status;
    Bracket sin;     //tax brackets
    sin.b1 = 9700, sin.b2 = 39475, sin.b3 = 84200, sin.b4 = 160725, sin.b5 = 204100, sin.b6 = 510300;
    Bracket mfj;
    mfj.b1 = 19400, mfj.b2 = 78950, mfj.b3 = 168400, mfj.b4 = 321450, mfj.b5 = 408200, mfj.b6 = 612350;
    Bracket mfs;
    mfs.b1 = 9700, mfs.b2 = 39475, mfs.b3 = 84200, mfs.b4 = 160725, mfs.b5 = 204100, mfs.b6 = 306750;
    Bracket hoh;
    hoh.b1 = 13850, hoh.b2 = 52850, hoh.b3 = 84200, hoh.b4 = 160700, hoh.b5 = 204100, hoh.b6 = 510300;
    char rr = 'y';     //allow program to rerun
    while (rr == 'Y' || rr == 'y') {
        cout << "enter filing status:" << endl;  //ask for input
        cout << "[1] single, [2] married (separately), [3] married (jointly), [4] head of household, [5] for custom tax bracket" << endl;
        cin >> status;
        cout << "enter income" << endl;
        cin >> inc;
        switch (status) {//find filing status and calculate tax
        case 1:
            b1 = sin.b1, b2 = sin.b2, b3 = sin.b3, b4 = sin.b4, b5 = sin.b5, b6 = sin.b6;
            taxcalculation(inc, b1, b2, b3, b4, b5, b6);
            break;
        case 2:
            b1 = mfj.b1, b2 = mfj.b2, b3 = mfj.b3, b4 = mfj.b4, b5 = mfj.b5, b6 = mfj.b6;
            taxcalculation(inc, b1, b2, b3, b4, b5, b6);
            break;
        case 3:
            b1 = mfs.b1, b2 = mfs.b2, b3 = mfs.b3, b4 = mfs.b4, b5 = mfs.b5, b6 = mfs.b6;
            taxcalculation(inc, b1, b2, b3, b4, b5, b6);
            break;
        case 4:
            b1 = hoh.b1, b2 = hoh.b2, b3 = hoh.b3, b4 = hoh.b4, b5 = hoh.b5, b6 = hoh.b6;
            taxcalculation(inc, b1, b2, b3, b4, b5, b6);
            break;
        case 5:
            cout << "Feature not available yet" << endl;
            break;
        }
        cout << "rerun program? [Y/N]" << endl; //ask to rerun
        cin >> rr;
        cout << endl;
    }
}
void taxcalculation(double inc, double b1, double b2, double b3, double b4, double b5, double b6) { //calculate taxes
    double tax, taxpct, posttax;
    double r1 = 0.10, r2 = 0.12, r3 = 0.22, r4 = 0.24, r5 = 0.32, r6 = 0.35, r7 = 0.37;
    if (inc <= b1) { tax = r1 * inc; }
    else if (inc > b1&& inc <= b2) { tax = r1 * b1 + r2 * (inc - b1); }
    else if (inc > b2&& inc <= b3) { tax = r1 * b1 + r2 * (b2 - b1) + r3 * (inc - b2); }
    else if (inc > b3&& inc <= b4) { tax = r1 * b1 + r2 * (b2 - b1) + r3 * (b3 - b2) + r4 * (inc - b3); }
    else if (inc > b4&& inc <= b5) { tax = r1 * b1 + r2 * (b2 - b1) + r3 * (b3 - b2) + r4 * (b4 - b3) + r5 * (inc - b4); }
    else if (inc > b5&& inc <= b6) { tax = r1 * b1 + r2 * (b2 - b1) + r3 * (b3 - b2) + r4 * (b4 - b3) + r5 * (b5 - b4) + r6 * (inc - b5); }
    else if (inc > b6) { tax = r1 * b1 + r2 * (b2 - b1) + r3 * (b3 - b2) + r4 * (b4 - b3) + r5 * (b5 - b4) + r6 * (b6 - b5) + r7 * (inc - b6); }
    taxpct = (tax / inc) * 100;
    posttax = inc - tax;
    cout << "Your yearly tax is $" << tax << "." << endl;
    cout << "which is " << taxpct << "% of your total income." << endl;
    cout << "After taxes, you make $" << posttax << "." << endl;
}