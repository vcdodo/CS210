#include <cstdlib>
/**
 * repeats getting the user's choice and taking the appropriate action until the user chooses 4 for exit
 */
void mainMenu() {
  /** You may assume you have a working getMenuChoice(n), addOneHour(), addOneMinute(), and addOneSecond().
   * The test will hit 1\n2\n2\n3\n3\n3\n4\n, and expect the adding functions to be called the right number of times.
   * getMenuChoice(4) will handle the input and return 1, 2, 3, or 4.
   * Feel free to change things around in your program, but for now get this to work with these function signatures.
   */
  // TODO: Your Code here
  unsigned int menuChoice;
  unsigned int menuSize = 4;

  menuChoice = getMenuChoice(menuSize);

  while (menuChoice != 4) {
    switch (menuChoice) {
    case 1:
      addOneHour();
      break;

    case 2:
      addOneMinute();
      break;

    case 3:
      addOneSecond();
      break;
    }
    menuChoice = getMenuChoice(menuSize);
  }
}