#include <iostream>

using namespace std;
/*  
    EXAMPLE TAX BRACKET
    10,000                  0%
    30,000                  10%
    100,000                 25%
    >100,000                40%   
    
    ACTUAL TAX BRACKET FISCAL 2019 (DUE 2020)

    Tax rate	
    Single filers	        Married filing jointly*	    Married filing separately	    Head of household
10%	$0 – $9,700	            $0 – $19,400	            $0 – $9,700	                    $0 – $13,850
12%	$9,701 – $39,475	    $19,401 – $78,950	        $9,701 – $39,475	            $13,851 – $52,850
22%	$39,476 – $84,200	    $78,951 – $168,400	        $39,476 – $84,200	            $52,851 – $84,200
24%	$84,201 – $160,725	    $168,401 – $321,450	        $84,201 – $160,725	            $84,201 – $160,700
32%	$160,726 – $204,100	    $321,451 – $408,200	        $160,726 – $204,100	            $160,701 – $204,100
35%	$204,101 – $510,300	    $408,201 – $612,350	        $204,101 – $306,750	            $204,101 – $510,300
37%	$510,301 or more	    $612,351 or more	        $306,751 or more	            $510,301 or more
*/    

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