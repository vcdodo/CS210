
#include <string>
#include <iostream>
using namespace std;

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
    string hours, minutes, seconds;
  
    hours = twoDigitString(h);
    minutes = twoDigitString(m);
    seconds = twoDigitString(s);
  
    timeFormat24 = hours + ":" + minutes + ":" + seconds;
  
    // return time as hh:mm:ss
    return timeFormat24;
  }