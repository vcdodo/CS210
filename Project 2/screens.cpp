#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "screens.h"

void Screen::welcomeScreen() {
    cout << "Welcome to the Airgead Banking Application" << endl;
    cout << "Please indicate your preferred type of account: " << endl;
    cout << "1 - Single lump sum investment" << endl;
    cout << "2 - Single investment with recurring monthly deposit" << endl;
}

