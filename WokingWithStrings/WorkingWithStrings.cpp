#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hey ! what's up !";
    phrase[3] = 'K'; // Remove the first space in the phrase

    cout << phrase << endl;
    cout << phrase.length() << endl; // Number of characters inside the phrase
    cout << phrase[0] << endl; // First character (character at indice 0)
    cout << phrase.find("wha", 0) << endl; // Find a charcter por string in phrase return the index. 0 is startIndex and 
    cout << phrase.substr(6, 3);
}