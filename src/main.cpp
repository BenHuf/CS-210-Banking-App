/*
 *  Project 2
 *  Airgead Banking
 *
 *  Date: Feb. 5, 2023
 *  Author: Benjamin Huffman
 */


#include "application.h"
#include "bank.h"
#include "application.cpp"
#include "bank.cpp"
using namespace std;

int main(){
  // instantiate application
  Application app = Application();

  // instantiate bank with responses from main menu
  Bank bank = app.mainMenu();

  // display bank reports
  bank.reports();

  // ask if user wants to restart or exit 
  if (app.restart()) {
    main();
  }
  
  // end
  return 0;
};