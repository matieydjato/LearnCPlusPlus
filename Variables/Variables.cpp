#include <iostream>

using namespace std;

int main()
{
    string characterName = "John"; // Declaration and initialisation
    int characterAge; // Declaration
    characterAge = 25; // Initialisation

    cout << "My name is " << characterName << endl;
    cout << "And i am " << characterAge  << " years old" << endl;

    characterName = "Mike";
    characterAge = 21;

    cout << "My brother name is " << characterName << endl;
    cout << "And he's " << characterAge << " years old" << endl;
}