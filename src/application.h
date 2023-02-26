/*
 *  Project 2
 *  Airgead Banking
 *
 *  Date: Feb. 5, 2023
 *  Author: Benjamin Huffman
 */

#include "bank.h"
#ifndef AIRGEADBANKING_APPLICATION_H
#define AIRGEADBANKING_APPLICATION_H

class Application {  
  public:
    Application();
    Bank mainMenu();
    bool restart();
};

#endif