#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "print_details.h"

/**
* Prints the calculated results of each years investment details in
* 3 separate fields
* @param year year number
* @param yearEndBalance the current dollar value of the investment
* @param interestEarned dollar amount of how much earned in that year
*/
void PrintDetails:: printDetails(int year, double yearEndBalance,
    double interestEarned){

    cout << fixed;
    cout << setprecision(2);
    cout << year << "\t\t" << "$" << yearEndBalance << "\t\t" << "$" << 
        interestEarned << endl;
    // returns nothing, just prints output to cout
}
