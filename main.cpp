#include <iostream>

using namespace std;

string encrypt(string message)
{
    string encrypted_message;

    for (int i = 0; i < message.length(); i++)
    {
        encrypted_message += (char)message[i] + 4;
    }
    return encrypted_message;
}

string decrypt(string message)
{
    string decrypted_message;
    for (int i = 0; i < message.length(); i++)
    {
        decrypted_message += (char)message[i] - 4;
    }
    return decrypted_message;
}

int main()
{

    cout << "\nWelcome to the Encryption algorythm\n Usage:\n e for encrypting\n d for decrypting \n"
         << endl;
    char choice;
    string message;

    cout << "Enter your choice: " << endl;
    cin >> choice;
    choice = tolower(choice);
    cout << "Enter your message: " << endl;
    cin >> message;

    switch (choice)
    {
    case 'e':
        cout << "Encrypted message: " << encrypt(message) << endl;
        break;

    case 'd':
        cout << "Decrypted message: " << decrypt(message) << endl;
        break;
    }

    return 0;
}