#include <iostream>
#include <string>
using namespace std;

#include "headings.h"

void Heading::printColumnHeadings() {
    cout << "Year" << "\t\t" << "Year End Balance" << "\t" << 
    "Year End Interest Earned" << endl;
    cout << "----------------------------------------------------------------"
        << endl;
}

void Heading::printMonthlyDepositHeader(){
    cout <<"\nBalances and Accrued Interest Without Monthly Deposits"
        << endl;
    cout << "================================================================"
        << endl;
    printColumnHeadings();
}

void Heading::printLumpSumHeader() {
    cout <<"\nBalances and Accrued Interest With Monthly Deposits"
        << endl;
    cout << "================================================================"
        << endl; 
    printColumnHeadings();
}

void Heading::printInputHeader() {
    cout << "================================================================"
        << endl;
    cout << "==================  Account Inputs  ============================"
        << endl;
    cout << "================================================================"
        << endl;
        
}
