/*
 *  Project 2
 *  Airgead Banking
 *
 *  Date: Feb. 5, 2023
 *  Author: Benjamin Huffman
 */

#ifndef AIRGEADBANKING_BANK_H
#define AIRGEADBANKING_BANK_H

class Bank {
  private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_interestRate;
    int m_numberOfYears;

  public:
    Bank(double t_initialInvestment, double t_monthlyDeposit, double t_interestRate, int t_numberOfYears);
    void calculateBalanceWithoutMonthlyDeposit();
    void calculateBalanceWithMonthlyDeposit();
    void printDetails(int t_year, double t_yearEndBalance, double t_interestEarned);
    void reports();
};

#endif