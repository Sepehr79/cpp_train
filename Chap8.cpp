#include <iostream>

using namespace std;

void incrementBuiltInArray(int array[]);

void incrementBuiltInArray2(int* array);

int main(int argc, char const *argv[])
{
    int second = 0;
    int array[] = {1, 2, 3};
    // We dont need to pass built in array by refrence or pointer.
    // Becuase the array implicity will pass by the first element address
    incrementBuiltInArray(array);
    for (auto i: array)
    {
        cout << i << endl;
    }

    cout << "======================" << endl;
    int array2[] = {1, 2, 3};
    incrementBuiltInArray2(array2);
    for (auto i: array2)
    {
        cout << i << endl;
    }

    auto num = 3;
    int* yptr{nullptr};
    yptr = &num;

    int arr[3]{1, 2, 3};
    int arr[]{1, 2, 3, 4, 5};

    for (int i = 0; argv[i]; i++)
    {
        cout << argv[i] << endl;
    }

    // Non constant pointer to constant data
    const int* number{&num};
    number = &second;

    // Constant pointer to non constant data
    int* const ptr{&num};
    *ptr = 6;

    // Constant pointer to constant data
    const int* const constant{&num};

    int intSize = sizeof(int);

    return 0;
}

void incrementBuiltInArray(int array[]) {
    array[0]++;
    array[1]++;
    array[2]++;
}

void incrementBuiltInArray2(int* array) {
    array[0]++;
    array[1]++;
    array[2]++;
}