/**
* Display the clocks
*
* @param h, hours 0 to 23
* @param m, minutes 0 to 59
* @param s, seconds 0 to 59
*/
void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
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
        
    }