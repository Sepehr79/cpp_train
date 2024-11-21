#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; argv[i]; i++)
    {
        cout << argv[i] << endl;
    }
    
    
    return 0;
}
