#include <iostream>

using namespace std;

void helloWorld() {
    cout << "Hello world !" << endl;
}

void sayHi(string name) {
    cout << "Hello " << name << endl;
}

int sumOfTwoNumbers(int num1, int num2);

int cube(int num);

int main()
{
    helloWorld();
    sayHi("Mike");
    cout << "2 + 3 is " << sumOfTwoNumbers(2, 3) << endl;
    cout << "Cube of 4 is " << cube(4);

    return 0;
}

int sumOfTwoNumbers(int num1, int num2) {
    return num1 + num2;
}

int cube(int num) {
    return num * num * num;
}