#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Time.h"

using namespace std;

static Time TIME{1, 1, 1}; // Destructor of static only call when main terminate

int main(int argc, char const *argv[])
{
    Time time{15, 12, 5};
    cout << time.toStandardString() << endl;

    Time* timePointer;
    timePointer = &time;
    timePointer->setTime(10, 10, 32);
    cout << timePointer->toStandardString() << endl;
    
    Time time3{10};
    cout << time3.toStandardString() << endl;

    Time* time4 = new Time(9); 

    delete time4;  // Calls destructor of time 

    if (0)
    {
        // if normal exit
        exit(0); // Calls all destructors
        // if error accured
        abort(); // Doesnt call destructors
    }

    {
        Time time{65};
    } // Calls destructor of time
    
    

    return 0;
}
