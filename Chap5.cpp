#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Square calculation for 1 to 10: " << endl;
    cout << setw(5) << "Number" << setw(15) << "Square" << endl;
    for (unsigned int i = 1; i <= 10; i++)
    {
        cout << setw(5) << i << setw(15) << pow(i, 2) << endl;
    }

    // int8_t num{10};
    string name = "sepehr";
    double numver = 65.456;
    string namejnfe = to_string(numver);

    cout << namejnfe << endl;
    int number{10};

    switch (number)
    {
    case 1:
        break;
    case 2:
    case 3:
        break;
    
    default:
        break;
    }
         

    return 0;
}
