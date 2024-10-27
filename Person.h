#include <iostream>
#define MAX_USERS 20

using namespace std;

class Person {

private:
    
    string name{""};
    int age{0};

public:
    
 Person (string inputName, int inputAge) : name{inputName} {
    if (inputAge > 0)
    {
        age = inputAge;
    }        
 }

 string getName() const {
    return name;
 }

 int getAge() const {
    return age;
 }

protected:

};