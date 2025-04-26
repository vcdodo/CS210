/**
 * Gets menu choice 1 through maxChoice, inclusive
 *
 * @param maxChoice, maximum choice index, a number between 2 and 9, inclusive
 * @return the first legal choice input, could be 1 through maxChoice, inclusive
 */
unsigned int getMenuChoice(unsigned int maxChoice) {
    unsigned int choice;
    cin >> choice;
  
    while (!(choice > 0 && choice <= maxChoice)) {
      cin >> choice;
    }
    // return the value
    return choice;
  }