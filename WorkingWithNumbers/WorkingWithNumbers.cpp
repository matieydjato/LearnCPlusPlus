#include <iostream>
#include <cmath> // Libray for math functions

using namespace std;

int main()
{
	int num = 18;
	double num2 = 12.89;
	num += 10;

	cout << num + num2 << endl; // 40.89
	cout << pow(3,3) << endl; // 27
	cout << sqrt(16) << endl; // 4
	cout << round(16.891) << endl; // 17
	cout << ceil(16.291) << endl;// 17
	cout << floor(16.891) << endl; // 16
	cout << fmax(40, 41) << endl;// 41
	cout << fmin(40, 41); // 40

	return 0;
}