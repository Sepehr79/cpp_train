#include <iostream>
#include <cstdlib> // Basic random generator
#include <string>
#include <random> // Advanced random generator

using namespace std;

unsigned int x = 63; // Global Scope

void usedStaticLocal();

inline int cube(int);

int calByRefrence(int&);

int callByRefrenceButDontAllowToChange(const int&); // Better performance to call by refrence
const std::string& getByRefrenceButDontAllowToChange(void);

int defaultValues(int x = 1, int y = 6);

int square(int x, int y);
double square(double x, double y); // Function overloading

template <typename T>
T getMax(T value1, T value2, T value3) {
    T maximum{value1};
    if (value2 > value1 && value2 > value3)
    {
        return value2;
    } 
    if (value3 > value1 && value3 > value2)
    {
        return value3;
    }
    return value1;
}

int main(int argc, char const *argv[])
{
    unsigned int seed = 15;
    srand(seed); // seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    int i1 = rand();
    int i2 = rand();
    cout << i1 << " " << i2 <<endl;
    int random{0};

    for (int i = 0; i < 20; i++)
    {
        random = rand() % 10 + 1;
        cout << random << endl;
    }

    enum class Gender {MALE = 1, FEMALE, UNKNOWN};
    Gender gender = Gender::MALE;

    default_random_engine engine{static_cast<unsigned int>(time(0))}; // Algorithm implementation
    uniform_int_distribution<unsigned int> randomInt(1, 10); // Describe type of random number
    cout << "Advanced random generation: " << endl;
    for (int j = 0; j < 10; j++)
    {
        cout << randomInt(engine) << endl;
    }
    
    unsigned int x = 55; // Block Scope

    cout << "Using static variable: " << endl;
    for (int i = 0; i < 10; i++)
    {
        usedStaticLocal();
        cout << cube(i) << endl;
    }
    
    cout << "Call by refrence: " << endl;
    int refX = 5;
    calByRefrence(refX);
    cout << refX << endl;

    int& value2{refX};
    value2++;
    cout << refX << endl;

    int global = ::x; // Access global varibale

    int max = getMax(i1, i2, random);
    cout << max << endl;

    return 0;
}

void usedStaticLocal() {
    static unsigned int counter{0};
    counter++;
    cout << counter << endl;
}

inline int cube(int value) {
    return value * value * value;
}

int calByRefrence(int& value) {
    value++;
    cout << value << endl;
    return value;
}

int defaultValues(int x, int y) {
    return x + y;
}

