#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the character
    char ch;

    // Take a character as input from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check whether the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U') {

        // Character is a vowel
        cout << "The character is a vowel." << endl;
    }
    else {
        // Character is a consonant
        cout << "The character is a consonant." << endl;
    }

    return 0;
}
