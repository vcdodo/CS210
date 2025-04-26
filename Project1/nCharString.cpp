#include <iostream>
#include <string> // for string and to_string()
using namespace std;

/**
 * Returns a string of length n, each character a c.
 * For example, nCharString(5, '*') should return "*****"
 *
 * @param n string length, >=0
 * @return string of n c's
 */
string nCharString(size_t n, char c) {
    unsigned int i;
    string charString = "";

    for (i = 0; i <= n; ++i ) {
        charString += c;
    }
// return the n character string
    return charString;
} 