#include <iostream>
#include <string>
using namespace std;

#include "account.h"
#include "headings.h"
#include "print_details.h"


// Default constructor
Account::Account() {
    setInitialInvestment(0.00);
    setAnnualInterestRate(0.00);
    setNumberOfYears(0);
    setMonthlyDeposit(0.00);
    setBalance(0.00);
                
}


Account::Account(double initialInvestment, double annualInterest,
            int numYears) {
    setInitialInvestment(initialInvestment);                
    setAnnualInterestRate(annualInterest);
    setNumberOfYears(numYears);
    setMonthlyInterestRate();
    setBalance(initialInvestment);
}

Account::Account(double initialInvestment, double annualInterest,
            int numYears, double deposit) {
    setInitialInvestment(initialInvestment);                
    setAnnualInterestRate(annualInterest);
    setMonthlyDeposit(deposit);
    setNumberOfYears(numYears);
    setMonthlyInterestRate();
    setBalance(initialInvestment);            
}

double const Account::getInvestmentAmount() {
    return initialInvestmentAmount;
}

double const Account::getMonthlyDeposit() {
    return monthlyDeposit;

}

double const Account::getAnnualInterestRate() {
    return annualInterestRate;
}

double const Account::getMonthlyInterestRate() {
    return monthlyInterestRate;
    
}
int const Account::getNumberOfYears() {
    return numberOfYears;
}

double const Account::getAccountBalance() {
    return balance;
}

void Account::setInitialInvestment(double initialInvestment) {
    initialInvestmentAmount = initialInvestment;
}

void Account:: setMonthlyDeposit(double deposit) {
    monthlyDeposit = deposit;
}

void Account::setAnnualInterestRate(double interestRate) {
    annualInterestRate = interestRate / 100;
}

void Account::setMonthlyInterestRate() {
    monthlyInterestRate = annualInterestRate / 12;
}

void Account::setNumberOfYears(int numYears) {
    numberOfYears = numYears;
}

void Account::setBalance(double initialInvestment) {
    balance = initialInvestment;
}


/* Calculates and returns an end of year balance for given number of years
 *
 * @param initialInvestment dollar amount of initial investment
 * @param interestRate percentage of investment earned each year (annually), 
 * so a passed value of 3.5 is a rate of .035
 * @param numberOfYears number of years to calculate balance for
 *
 * @return the final calculated end of year balance
 */
double Account::calculateBalanceWithoutMonthlyDeposit(
     double initialInvestment, double interestRate, int numberOfYears) {
   
    unsigned int years;
    unsigned int months;
    double nominalInterestRate = getMonthlyInterestRate();
    double accountBalance = getAccountBalance();
    double monthlyInterestAmount;
    double accruedAnnualInterest;
    PrintDetails accountDetails;
  
    for (years = 1; years <= numberOfYears; ++years) {
      accruedAnnualInterest = 0;
      for (months = 1; months <= 12; ++months) {
        monthlyInterestAmount = accountBalance * nominalInterestRate;
        accountBalance += monthlyInterestAmount; 
        accruedAnnualInterest += monthlyInterestAmount;
      }
      accountDetails.printDetails(years, accountBalance, accruedAnnualInterest);
    }
  
    // return the final balance
    return balance;
  }
  
   /**
 * Calculates and returns an end of year balance for a given number of years
 *
 * @param initialInvestment dollar amount of initial investment
 * @param monthlyDeposit dollar amount added into the investment each month
 * @param interestRate percentage of investment earned each year (annually), 
 * so a passed value of 3.5 is a rate of .035
 * @param numberOfYears number of years to calculate balance for
 *
 * @return the final calculated end of year balance
 */
double Account::calculateBalanceWithMonthlyDeposit(double initialInvestment, 
    double monthlyDeposit, double interestRate, int numberOfYears){
  
    unsigned int years;
    unsigned int months;
    double nominalInterestRate = getMonthlyInterestRate();
    double accountBalance = getAccountBalance();
    double monthlyInterestAmount;
    double accruedAnnualInterest;
    PrintDetails accountDetails;
    
     for (years = 1; years <= numberOfYears; ++years) {
      accruedAnnualInterest = 0;
      for (months = 1; months <= 12; ++months) {
        monthlyInterestAmount = accountBalance * monthlyInterestRate;
        accountBalance = accountBalance + monthlyInterestAmount + monthlyDeposit; 
        accruedAnnualInterest += monthlyInterestAmount;
      }
      accountDetails.printDetails(years, accountBalance, accruedAnnualInterest);
    }
    
    // return the final balance
    return balance;
 }

