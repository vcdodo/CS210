# include<string> 
/**
 * Formats the time in am/pm format
 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 *
 * @return hh:mm:ss A M or hh:mm:ss P M where hh is between 01 and 12, inclusive
 */
string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
    string hours, minutes, seconds;
    string m_indicator;
    string timeFormat12;
 
    if (h == 0) {
     hours = twoDigitString(12);
     m_indicator = "A M";
    }
    else if (h > 0 && h < 12) {
     hours = twoDigitString(h);
     m_indicator = "A M";
    }
    else if (h == 12) {
     hours = twoDigitString(h);
     m_indicator = "P M";
    }
    else if (h > 12){
     hours = twoDigitString(h - 12);
     m_indicator = "P M";
    }
   minutes = twoDigitString(m);
   seconds = twoDigitString(s);
   timeFormat12 = hours + ":" + minutes + ":" + seconds + " " + m_indicator;
   return timeFormat12;
 }