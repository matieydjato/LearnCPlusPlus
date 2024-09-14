#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[10] = {2, 23, 43, 44, 445}; // 10 is arr length
    arr[9] = 100;
    arr[0] = 35;

    cout << arr[0];

    return 0;
}