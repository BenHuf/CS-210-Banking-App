/*
 *  Project 2
 *  Airgead Banking
 *
 *  Date: Feb. 5, 2023
 *  Author: Benjamin Huffman
 */

#include <iostream>
#include <iomanip>
#include <math.h>
#include "bank.h"
using namespace std;

// constructor
Bank::Bank(double t_initialInvestment, double t_monthlyDeposit, double t_interestRate, int t_numberOfYears){
  m_initialInvestment = t_initialInvestment;
  m_monthlyDeposit = t_monthlyDeposit;
  m_interestRate = t_interestRate;
  m_numberOfYears = t_numberOfYears;
}

void Bank::calculateBalanceWithoutMonthlyDeposit() {
  int i;
  double rate = (m_interestRate / 100);
  double balance = m_initialInvestment;
  double yearlyInterestEarned;
  double totalInterest = 0; 

  // calculate interest and balance
  for (i = 1; i <= m_numberOfYears; i++) {
    yearlyInterestEarned = balance * pow((1 + (rate / 12)), 12) - balance;
    balance += yearlyInterestEarned;
    totalInterest += yearlyInterestEarned;
    printDetails(i, balance, yearlyInterestEarned);
  }
}

void Bank::calculateBalanceWithMonthlyDeposit() {
  int i;
  int j;
  double rate = (m_interestRate / 100);
  double balance = m_initialInvestment;
  double yearlyInterestEarned;
  double monthlyInterestEarned;
  double totalInterest;
  // calculate interest and balance with monthly deposists
  // per app sense monthly deposits should occur after interest is calculated
  // as this month's deposit does not earn interest (until the next month)
  for (i = 1; i <= m_numberOfYears; i++) {
    yearlyInterestEarned = 0;
    for (j = 0; j < 12; j++) {
      monthlyInterestEarned = (balance * (1 + (rate / 12))) - balance;
      balance += m_monthlyDeposit + monthlyInterestEarned;
      yearlyInterestEarned += monthlyInterestEarned;
    }
    totalInterest += yearlyInterestEarned;
    printDetails(i, balance, yearlyInterestEarned);
  }
}

void Bank::printDetails(int t_year, double t_yearEndBalance, double t_interestEarned){
  const char SPACE = ' ';
  const int YEAR_WIDTH = 5;
  const int BALANCE_WIDTH = 19;
  const int INTEREST_WIDTH = 20;

  // print year index, balance, and interest formatted (roughly) as a table
  cout << right << setw(YEAR_WIDTH) << setfill(SPACE) << t_year;
  cout << setprecision(2) << fixed << right << setw(BALANCE_WIDTH) << setfill(SPACE) << "$" << t_yearEndBalance;
  cout << setprecision(2) << fixed << right << setw(INTEREST_WIDTH) << setfill(SPACE)<< "$" << t_interestEarned << endl;
}

void Bank::reports() {
      // print headers and call calculate balance to display table
      cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
      cout << "================================================================" << endl;
      cout << " Year         Year End Balance         Year End Earned Interest " << endl;
      cout << "----------------------------------------------------------------" << endl;
      calculateBalanceWithoutMonthlyDeposit();
      cout << endl;

      // print header and call calculate balance to display table
      cout << "      Balance and Interest With Additional Monthly Deposits     " << endl;
      cout << "================================================================" << endl;
      cout << " Year         Year End Balance         Year End Earned Interest " << endl;
      cout << "----------------------------------------------------------------" << endl;
      calculateBalanceWithMonthlyDeposit();
      cout << endl;
    }

