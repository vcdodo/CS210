#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "account.h"
#include "headings.h"
#include "screens.h"

int main()
{
    // variables needed for the Account class
    int accountType;
    double g_initialInvestment;
    double g_monthlyDeposit;
    double g_annualInterestRate;
    int g_numberOfYears;
    Heading headingHandler;
    Screen screenHandler;
    
    screenHandler.welcomeScreen();
    cin >> accountType;
    
    while ( !(accountType > 0) && !(accountType < 3)) {
        cout << "Invalid account type. Please enter a valid account type."
            << endl;
        screenHandler.welcomeScreen();
    }
    
    headingHandler.printInputHeader();
    
    if (accountType == 1) {
        // Capture the user input needed for this account type
        cout << "Initial Investment Amount: $";
        cin >> g_initialInvestment;
        cout << "Annual Interest: ";
        cin >> g_annualInterestRate;
        cout << "Number of years: ";
        cin >> g_numberOfYears;
        /* Overloaded constructors allow for the use of the appropriate 
         * constructors
        */
        Account investmentAccount(g_initialInvestment, 
        g_annualInterestRate, g_numberOfYears);
        headingHandler.printLumpSumHeader();
        investmentAccount.calculateBalanceWithoutMonthlyDeposit(g_initialInvestment, 
        g_annualInterestRate, g_numberOfYears); 
    } else {
        /* At this stage, we have already ensured that only a valid Account 
        * type can be entered. So, if account type is not equal to 1, then it
        * must be equal to 2 */
        cout << "Initial Investment Amount: $";
        cin >> g_initialInvestment;
        cout << "Monthly Deposit: $";
        cin >> g_monthlyDeposit;
        cout << "Annual Interest: ";
        cin >> g_annualInterestRate;
        cout << "Number of years: ";
        cin >> g_numberOfYears;
        
        Account investmentAccount(g_initialInvestment, 
            g_annualInterestRate, g_numberOfYears, g_monthlyDeposit);
        headingHandler.printMonthlyDepositHeader();
        investmentAccount.calculateBalanceWithMonthlyDeposit(g_initialInvestment, 
         g_monthlyDeposit, g_annualInterestRate, g_numberOfYears);
    }
    
    return 0;
}