#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Use getline for a string and cin for a char or number
    int age;
    string name;

    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your age : ";
    cin >> age;

    cout << "Your name is " << name << " and you are " << age << " years old" << endl;

    return 0;
}