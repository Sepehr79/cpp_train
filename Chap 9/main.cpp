#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Time.h"
#include <sstream>

using namespace std;

static Time TIME{1, 1, 1}; // Destructor of static only call when main terminate

struct Block 
{
    Block* prev = nullptr;
    string data;
    int nounce;

    Block(string data, int nounce) {
        this->data = data;
        this->nounce = nounce;
    }

    string display() const {
        stringstream str;
        str << "Data: " << data << endl << "Nounce: " << nounce << endl;
        Block* current = prev;
        while (current != nullptr)
        {
            str << current->display();
            current = current->prev;
        }
        
        return str.str();
    }

};




int main(int argc, char const *argv[])
{
    Block firstBlock{"First block", 0};
    Block second{"Second block", 80};
    second.prev = &firstBlock;
    cout << second.display();
    
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
    
    Time time10{11};
    Time time11{12};
    time10 = time11;
    cout << time10.toStandardString() << endl; // endl

    const Time time12{12};
    // time12.toStandardString(); compile error function also must be declared as const
    // time12.setTime(10, 10, 10); compile error


    return 0;
}
