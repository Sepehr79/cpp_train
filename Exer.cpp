#include <iostream>
#include "Swap.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 3;
    printValue(x, y);
    swap(&x, &y);
    printValue(x, y);
    printValue(&x, &y);
    return 0;
}
