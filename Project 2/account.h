#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
    
    public: 
        Account(); // Default constructor
        
        // Constructor for a single initialInvestment
        Account(double initialInvestment, double annualInterest,
            int numYears); 
        
        // Constructor for a single investment plus recurring monthly deposits
        Account(double initialInvestment, double annualInterest,
            int numYears, double deposit); 
            
        double const getInvestmentAmount();
        double const getMonthlyDeposit();
        double const getAnnualInterestRate();
        double const getMonthlyInterestRate();
        int const getNumberOfYears();
        double const getAccountBalance();
        
        void setInitialInvestment(double intialInvestment);
        void setMonthlyDeposit(double deposit);
        void setAnnualInterestRate(double interestRate);
        void setNumberOfYears(int numYears);
        void setMonthlyInterestRate();
        void setBalance(double initialInvestment);
        
        
        
        double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, 
            double interestRate, int numberOfYears);
        double calculateBalanceWithMonthlyDeposit(double initialInvestment, 
            double monthlyDeposit, double interestRate, int numberOfYears);
            
        
    private:
        double initialInvestmentAmount;
        double monthlyDeposit;
        double annualInterestRate;
        int numberOfYears;
        double monthlyInterestRate;
        double balance;
       

};
#endif