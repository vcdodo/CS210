// test cases (["Add One Hour", "Add One Minute", "Add One Second", "Exit Program"], 4, 26 or 57)
/**
 * Prints menu
 *
 * @param *strings[], nonempty array of choices
 * @param width, width of each line, will be comfortably bigger than the longest string
 *
 */
void printMenu(char * strings[], unsigned int numStrings, unsigned char width) {
    unsigned int i;
    cout << nCharString(width, '*') << endl;
    string menuString;
    int menuItemNumber;
    for (i = 0; i < numStrings; ++i) {
      menuItemNumber = i + 1,
      menuString = to_string(menuItemNumber) + nCharString(1, ' ') + nCharString(1, '-') + nCharString(1, ' ') + strings[i];
      cout << nCharString(1, '*') << nCharString(1,' ') + menuString + nCharString((width - menuString.size() - 3), ' ') + nCharString(1, '*') << endl;
      if (i < numStrings - 1) {
        cout << endl;
      }
   }
    cout << nCharString(width, '*') << endl;
  }