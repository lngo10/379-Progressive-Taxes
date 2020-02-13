#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*    ACTUAL TAX BRACKET FISCAL 2019 (DUE 2020)

        Single filers	        Married filing jointly	    Married filing separately	    Head of household
10%	    $0 –        $9,700	    $0 –        $19,400	        $0 –        $9,700	            $0 – $13,850
12%	    $9,701 –    $39,475	    $19,401 –   $78,950	        $9,701 –    $39,475	            $13,851 – $52,850
22%	    $39,476 –   $84,200	    $78,951 –   $168,400	    $39,476 –   $84,200	            $52,851 – $84,200
24%	    $84,201 –   $160,725	$168,401 –  $321,450	    $84,201 –   $160,725	        $84,201 – $160,700
32%	    $160,726 –  $204,100	$321,451 –  $408,200	    $160,726 –  $204,100	        $160,701 – $204,100
35%	    $204,101 –  $510,300	$408,201 –  $612,350	    $204,101 –  $306,750	        $204,101 – $510,300
37%	    $510,301 or more	    $612,351 or more	        $306,751 or more	            $510,301 or more        */

void taxtext()
{
    double taxo = 0, taxpo = 0;
    cout << "Your yearly tax is " << taxo << endl;
    cout << "You pay " << taxpo << "of your total income" << endl;
    return;
}

class Bracket {
public:
    //vector<double> b(5);
    double b1;
    double b2;
    double b3;
    double b4;
    double b5;
    double b6;
};

int main()
{
    //tax rates
    //auto r = vector<double>{ 0.1, 0.12, 0.22, 0.24, 0.32, 0.35, 0.37 };
    double r1 = 0.10, r2 = 0.12, r3 = 0.22, r4 = 0.24, r5 = 0.32, r6 = 0.35, r7 = 0.37;
    /*double r2 = 0.12;

    double r4 = 0.24;
    double r5 = 0.32;
    double r6 = 0.35;
    double r7 = 0.37; */

    Bracket sin;
    sin.b1 = 9700;
    sin.b2 = 39475;
    sin.b3 = 84200;
    sin.b4 = 160725;
    sin.b5 = 204100;
    sin.b6 = 510300;

    Bracket mfj;
    mfj.b1 = 19400;
    mfj.b2 = 78950;
    mfj.b3 = 168400;
    mfj.b4 = 321450;
    mfj.b5 = 408200;
    mfj.b6 = 612350;

    Bracket mfs;
    mfs.b1 = 9700;
    mfs.b2 = 39475;
    mfs.b3 = 84200;
    mfs.b4 = 160725;
    mfs.b5 = 204100;
    mfs.b6 = 306750;

    Bracket hoh;
    hoh.b1 = 13850;
    hoh.b2 = 52850;
    hoh.b3 = 84200;
    hoh.b4 = 160700;
    hoh.b5 = 204100;
    hoh.b6 = 510300;

    int status;
    double inc;
    double tax;
    double taxpercent;



    cout << "enter filing status:" << endl;
    cout << "enter [1] for single" << endl;
    cout << "enter [2] for married filing separately" << endl;
    cout << "enter [3] for married filing jointly" << endl;
    cout << "enter [4] for head of household" << endl;
    cout << "enter [5] for custom tax bracket" << endl;
    cin >> status;
    cout << "enter income" << endl;
    cin >> inc;


    /* test alternative structure with switch case for different status
    example:     */

    double b1, b2, b3, b4, b5, b6;

    switch (status) {
    case 1:
        b1 = sin.b1;
        b2 = sin.b2;
        b3 = sin.b3;
        b4 = sin.b4;
        b5 = sin.b5;
        b6 = sin.b6;
        break;
    case 2:
        b1 = mfj.b1;
        b2 = mfj.b2;
        b3 = mfj.b3;
        b4 = mfj.b4;
        b5 = mfj.b5;
        b6 = mfj.b6;
        break;
    case 3:
        b1 = mfs.b1;
        b2 = mfs.b2;
        b3 = mfs.b3;
        b4 = mfs.b4;
        b5 = mfs.b5;
        b6 = mfs.b6;
        break;
    case 4:
        b1 = hoh.b1;
        b2 = hoh.b2;
        b3 = hoh.b3;
        b4 = hoh.b4;
        b5 = hoh.b5;
        b6 = hoh.b6;
        break;
    case 5:
        cout << "Feature not available yet" << endl;
        break;
    }


    if (inc <= sin.b1) {
        tax = r1 * inc;
        cout << "Your yearly tax is " << tax << endl;
        //taxout();// 
    }

    else if (inc > sin.b1&& inc <= sin.b2) {
        tax = r1 * (sin.b1 - 0) + r2 * (inc - sin.b1);
        cout << "Your yearly tax is " << tax << endl;
    }

    else if (inc > sin.b2&& inc <= sin.b3) {
        tax = r1 * (sin.b1 - 0) + r2 * (sin.b2 - sin.b1) + r3 * (inc - sin.b2);
        cout << "Your yearly tax is " << tax << endl;
    }

    else if (inc > sin.b3&& inc <= sin.b4) {
        tax = r1 * (sin.b1 - 0) + r2 * (sin.b2 - sin.b1) + r3 * (sin.b3 - sin.b2) + r4 * (inc - sin.b3);
        cout << "Your yearly tax is " << tax << endl;
    }

    else if (inc > sin.b4&& inc <= sin.b5) {
        tax = r1 * (sin.b1 - 0) + r2 * (sin.b2 - sin.b1) + r3 * (sin.b3 - sin.b2) + r4 * (sin.b4 - sin.b3) + r5 * (inc - sin.b4);
        cout << "Your yearly tax is " << tax << endl;
    }

    else if (inc > sin.b5&& inc <= sin.b6) {
        tax = r1 * (sin.b1 - 0) + r2 * (sin.b2 - sin.b1) + r3 * (sin.b3 - sin.b2) + r4 * (sin.b4 - sin.b3) + r5 * (sin.b5 - sin.b4) + r6 * (inc - sin.b5);
        cout << "Your yearly tax is " << tax << endl;
    }
    else if (inc > sin.b6) {
        tax = r1 * (sin.b1 - 0) + r2 * (sin.b2 - sin.b1) + r3 * (sin.b3 - sin.b2) + r4 * (sin.b4 - sin.b3) + r5 * (sin.b5 - sin.b4) + r6 * (sin.b6 - sin.b5) + r7 * (inc - sin.b6);
        cout << "Your yearly tax is " << tax << endl;
    }
}
