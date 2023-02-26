/*
 *  Project 2
 *  Airgead Banking
 *
 *  Date: Feb. 5, 2023
 *  Author: Benjamin Huffman
 */

#include <iostream>
#include <sstream>
#include <stdio.h>
#include "application.h"
#include "bank.h"
using namespace std;

Application::Application(){};

Bank Application::mainMenu() {
  double initialInvestment = 0;
  double monthlyDeposit;
  double interestRate;
  int numberOfYears;
  string userInput = "";

  // Print header
  cout << "**********************************" << endl;
  cout << "********** Data Input ************" << endl;

  // Initial investment amount prompt, input, and validation
  while (true) {
    cout << "Initial Investment Amount: $";
    getline(cin, userInput);
    stringstream myStream(userInput);

    if (myStream >> initialInvestment) {
      break;
    }
    else {
      cout << "Invalid response. Please enter a positive real number" << endl;
    }
  }

  // Monthly deposit prompt, input, and validation
  while (true) {
    cout << "Monthly Deposit: $";
    getline(cin, userInput);
    stringstream myStream(userInput);
    if (myStream >> monthlyDeposit) {
      break;
    }
    else {
      cout << "Invalid response. Please enter a positive real number" << endl;
    }
  }

  // Annual interest prompt, input, and validation
  while (true) {
    cout << "Annual Interest: %";
    getline(cin, userInput);
    stringstream myStream(userInput);
    if (myStream >> interestRate) {
      break;
    }
    else {
      cout << "Invalid response. Please enter a positive real number" << endl;
    }
  }

  // Number of years prompt, input, and validation
  while (true) {
    cout << "Number of years: ";
    getline(cin, userInput);
    stringstream myStream(userInput);
    if (myStream >> numberOfYears) {
      break;
    }
    else {
      cout << "Invalid response. Please enter a positive whole number." << endl;
    }
  }

  // Continue prompt and await keypress
  cout << "Press the enter key to continue . . ." << endl;
  getchar();
  
  // clear input for next prompt
  cin.clear();
  fflush(stdin);

  // Return Bank object contstructed from user input values
  return Bank(initialInvestment, monthlyDeposit, interestRate, numberOfYears);
}

bool Application::restart() {
  string userInput;
  char answer;

  // Prompts for restart or exit, accepts user input, and validates response
  while (true) {
    cout << "Would you like to return to the main menu?" << endl;
    cout << "Enter 'Y' to return to main menu or 'N' to exit" << endl;
    getline(cin, userInput);
    stringstream myStream(userInput);
    if (myStream >> answer) {
      if (answer == 'Y' || answer == 'y') {
        return true;
      } else if (answer == 'N' || answer == 'n') {
        return false;
      }
    }
    else {
      cout << "Invalid response." << endl;
    }
  }
}