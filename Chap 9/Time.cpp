#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int inputHour, int inputMinute, int inputSecond) 
: hour{inputHour}, minute{inputMinute}, second{inputSecond} {
    
}

Time::Time(int number) : Time{number, 0, 0} {

}

void Time::setTime(int inputHour, int inputMinute, int inputSecond) {
    hour = inputHour;
    minute = inputMinute;
    second = inputSecond;
}

string Time::toUniversalString() const {
    ostringstream out;
    out << setfill('0') << setw(2) << hour << ":" <<
     setw(2) << minute << ":"
        << setw(2);
    return out.str();
}

string Time::toStandardString() const {
    ostringstream output; // used to write output in memory
    output << setfill('0') << setw(2) <<
     ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
    return output.str();
}

Time::~Time() {
    std::cout << "Destructor of time is called with hour " << hour << endl;
}