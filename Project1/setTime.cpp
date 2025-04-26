#include <string>
#include <iostream>
using namespace std;

int getHours() {
    int hours;
    cin >> hours;
    while (!(hours >= 0 && hours < 24)) {
        cout << "Please enter valid hours: " ;
        cin >> hours;
    }
    return hours;
}

int getMinutes() {
    int minutes;
    cin >> minutes;
    while  (!(minutes >= 0 && hours < 60)) {
        cout << "Please enter valid minutes: " ;
        cin >> seconds;
    }
    return minutes;
}

int getSeconds() {
    int seconds;
    cin >> seconds;
    while  (!(seconds >= 0 && seconds < 60)) {
        cout << "Please enter valid seconds: " ;
        cin >> seconds;
    }
    return seconds;
}

void getInput(int& hh, int& mm, int& ss) {
    hh = getHours();
    mm = getMinutes();
    ss = getSeconds();
}
