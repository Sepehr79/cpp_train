#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Time.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Time time{15, 12, 5};
    cout << time.toStandardString() << endl;
    
    return 0;
}
