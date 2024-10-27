#include <iostream>
#include "Person.h"
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello world!";

    Person sepehr{"Mohammad Sepehr Mollaei", 24};

    cout << "Your name is " << sepehr.getName() << endl;

    double avg{static_cast<double>(20) / 3};

    cout << setprecision(2) << fixed;

    cout << "The avg is: " << avg << endl;

    double num = static_cast<double>(20); // Explicit cast

    int intnum = 10;

    double num2 = intnum; // Implicit cast

    cout << "num is: " << num << endl;

    unsigned int num3 = 10;

    return 0;
}
