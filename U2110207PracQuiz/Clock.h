#ifndef CLOCK_H
#define CLOCK_H




#include <iostream>
#include <string>
using namespace std;


class Clock {
private:
    int hour, minute, seconds;
public:
    Clock() {
        hour = 0;
        minute = 0;
        seconds = 0;
    }

    void SetTime(int hour, int minute, int seconds) {
        this->hour = hour;
        this->minute = minute;
        this->seconds = seconds;
    }

    void GetTime() {
        cout << "Hour: " << hour << endl;
        cout << "Minute: " << minute << endl;
        cout << "Seconds: " << seconds <<endl;
    }

    void operator==(Clock& clock) {
        if (clock.hour == hour && clock.minute == minute && clock.seconds == seconds) {
            cout << "They are equal\n";
        }
        else {
            cout << "Difference: " << endl;
            cout << "Hour: " << abs(clock.hour - hour) << endl;
            cout << "Minute: " << abs(clock.minute - minute) << endl;
            cout << "Seconds: " << abs(clock.seconds - seconds) << endl;
        }
    }

    Clock operator++(int) {
        Clock duplicate(*this);
        seconds++;
        return duplicate;
    }

    Clock operator--(int) {
        Clock duplicate(*this);
        seconds--;
        return duplicate;
    }

    friend void operator>>(istream& i, Clock& t);
    friend void operator<<(ostream& o, Clock& t);

};




#endif
