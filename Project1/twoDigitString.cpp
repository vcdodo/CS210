#include <iostream>
#include <string> // for string and to_string()
using namespace std;
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