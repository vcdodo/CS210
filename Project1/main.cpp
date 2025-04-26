// Online C++ compiler to run C++ program online
#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

int getHours() {
    int hrs;
    cin >> hrs;
    while (!(hrs >= 0 && hrs < 24)) {
        cout << "Please enter valid hours: " ;
        cin >> hrs;
    }
    return hrs;
}

int getMinutes() {
    int mins;
    cin >> mins;
    while  (!(mins >= 0 && mins < 60)) {
        cout << "Please enter valid minutes: " ;
        cin >> mins;
    }
    return mins;
}

int getSeconds() {
    int secs;
    cin >> secs;
    while  (!(secs >= 0 && secs < 60)) {
        cout << "Please enter valid seconds: " ;
        cin >> secs;
    }
    return secs;
}

void getInput(int& hh, int& mm, int& ss) {
    hh = getHours();
    mm = getMinutes();
    ss = getSeconds();
}

/**
 * Formats a number as 2 digits, with a leading 0 if needed
 * This method can be useful when converting a time like 9 hours, 12 minutes and
 * 3 seconds to "09:12:03" 
 * @param n number to format, assumed between 0 and 59, inclusive
 * @return two digit string representation of number
 */
string twoDigitString(unsigned int n) {
  string strf;
  // Numbers between 10 and 59 just need to be converted to a string
  if (n >= 0 && n <= 9) {
    strf = '0';
    strf.append(to_string(n));
  }
  else if (n >= 10 && n <= 59) {
    strf = to_string(n);
  }
  // Numbers from 0 to 9 need a "O" tacked onto the front of the string
  // representation of the number

  // Return the two digit string representation of n
  return strf;
}

/**
 * Returns a string of length n, each character a c.
 * For example, nCharString(5, '*') should return "*****"
 *
 * @param n string length, >=0
 * @return string of n c's
 */
string nCharString(size_t n, char c) {
    unsigned int i;
    string charString;

    for (i = 0; i <= n; ++i ) {
        charString += c;
    }
// return the n character string
    return charString;
}

/**
 * Formats the time in am/pm format
 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 *
 * @return hh:mm:ss A M or hh:mm:ss P M where hh is between 01 and 12, inclusive
 */
string formatTime12(unsigned int h = 0, unsigned int m = 0, unsigned int s = 0) {
    string hh, mm, ss;
    string m_indicator;
    string timeFormat12;
 
    if (h == 0) {
     hh = twoDigitString(12);
     m_indicator = "A M";
    }
    else if (h > 0 && h < 12) {
     hh = twoDigitString(h);
     m_indicator = "A M";
    }
    else if (h == 12) {
     hh = twoDigitString(h);
     m_indicator = "P M";
    }
    else if (h > 12){
     hh = twoDigitString(h - 12);
     m_indicator = "P M";
    }
   mm = twoDigitString(m);
   ss = twoDigitString(s);
   timeFormat12 = hh + ":" + mm + ":" + ss + " " + m_indicator;
   return timeFormat12;
 }
 
 /**
 * Formats the time in 24-hour format

 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 *
 * @return hh:mm:ss
 */
string formatTime24(unsigned int h = 0, unsigned int m = 0, unsigned int s = 0) {
    string timeFormat24;
    string hh, mm, ss;
  
    hh = twoDigitString(h);
    mm = twoDigitString(m);
    ss = twoDigitString(s);
  
    timeFormat24 = hh + ":" + mm + ":" + ss;
  
    // return time as hh:mm:ss
    return timeFormat24;
}

/**
* Display the clocks
*
* @param h, hours 0 to 23
* @param m, minutes 0 to 59
* @param s, seconds 0 to 59
*/
void displayClocks(unsigned int h = 0, unsigned int m = 0, unsigned int s = 0) {
    string format12 = formatTime12(h, m, s);
    string format24 = formatTime24(h, m, s);
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
    cout << nCharString(1, '*') << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') <<
        nCharString(3, ' ');
    cout << nCharString(1, '*') << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') << endl;
    cout << endl;
    cout << nCharString(1, '*') << nCharString(6, ' ') << format12 << nCharString(7, ' ') << nCharString(1, '*') <<
        nCharString(3, ' ');
    cout << nCharString(1, '*') << nCharString(8, ' ') << format24 << nCharString(9, ' ') << nCharString(1, '*') << endl;
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
    cout << endl; // Insert a new line to create a space between the next item that will print    
}

void printMenu(string strings[], unsigned int numStrings, unsigned char width) {
    unsigned int i;
    string menuString;
    int menuItemNumber;
    
    cout << nCharString(width, '*') << endl;
    for (i = 0; i < numStrings; ++i) {
      menuItemNumber = i + 1,
      menuString = to_string(menuItemNumber) + nCharString(1, ' ') + nCharString(1, '-') + nCharString(1, ' ') + strings[i] ;
      cout << nCharString(1, '*') << nCharString(1,' ') + menuString + nCharString((width - menuString.size() - 3), ' ') + nCharString(1, '*') << endl;
      if (i < numStrings - 1) {
        cout << endl;
      }
    }
    cout << nCharString(width, '*') << endl;
}
  
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

/**
 * Adds one hour
 */
void addOneHour(int& currentHr) {
    if (currentHr >= 0 && currentHr <= 22) {
      currentHr += 1;
    }
    else {
      currentHr = 0;
    }
}

void addOneMinute(int& currentHour, int& currentMin) {
    if (currentMin >= 0 && currentMin <= 58) {
      currentMin += 1;
    }
    else {
      currentMin = 0;
      addOneHour(currentHour);
    }
}

void addOneSecond(int& currentHr, int& currentMin, int& currentSecs) {
    if (currentSecs >= 0 && currentSecs <= 58) {
        currentSecs += 1;
    }
    else {
        currentSecs = 0;
        addOneMinute(currentHr, currentMin);
    }
}  


int main() {
    // Global variables
    
    string MENU[4] = {"Add One Hour", "Add One Minute", "Add One Second", "Exit The Program"};
    int hrs, mins, secs;
    unsigned int menuChoice;    
    getInput(hrs, mins, secs);
    
    
    
    displayClocks(hrs, mins, secs);
    printMenu(MENU, sizeof(MENU), 30);
    menuChoice = getMenuChoice(sizeof(MENU));
    
    
    while (menuChoice != 4) {
        switch (menuChoice) {
        case 1:
          addOneHour(hrs);
          break;
    
        case 2:
          addOneMinute(hrs, mins);
          break;
    
        case 3:
          addOneSecond(hrs, mins, secs);
          break;
        }
        displayClocks(hrs, mins, secs);
        printMenu(MENU, sizeof(MENU), 30);
        menuChoice = getMenuChoice(sizeof(MENU));
    }
    
    
    return 0;
}