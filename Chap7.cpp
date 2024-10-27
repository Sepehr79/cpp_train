#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 3> arr = {10, 20, 30};
    int sum{0};
    for (size_t i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    
    cout << "Sum is: " << sum << endl;

    // Range based for statement
    static array<int, 5> nums{5, 15, 2, 98, 66};
    sort(nums.begin(), nums.end());
    for (int num: nums)
    {
        cout << num << endl;
    }

    // Multiply all elements
    for (int& num: nums)
    {
        num = num * 2;
    }
    
    array<string, 5> names {"Sepehr", "Ali", "Hassan", "Hossein", "Fatemeh"};
    sort(names.begin(), names.end());
    for (string name: names)
    {
        cout << "name: " << name << endl;
    }
        
    bool found{binary_search(names.begin(), names.end(), "Sepehr")};
    cout << "Found Sepehr: " << found << endl;

    // Multidimensional Arrays
    array<array<int, 2>, 3> multidimensional = {
        5, 6, 5, 8, 9, 10
    };
    auto name = "sepehr";
    for (auto const row: multidimensional)
    {
        for (auto const column: row)
        {
            cout << column << endl;
        }
        
    }

    vector<int> numbers = { 5, 12, 19, 20};
    numbers.push_back(23);
    numbers.at(0) = 1;
    try
    {
        throw runtime_error("Unsuported exception");
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return 0;
}
