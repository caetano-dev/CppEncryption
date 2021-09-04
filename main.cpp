#include <iostream>

using namespace std;

string encrypt(string message)
{
    string encrypted_message;

    for (int i = 0; i < message.length() && message[i] != '\0'; i++)
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            encrypted_message += message[i] - 9;
        }

        else
        {
            encrypted_message += message[i];
        }
    }
    return encrypted_message;
}

string decrypt(string message)
{
    string decrypted_message;
    for (int i = 0; i < message.length() && message[i] != '\0'; i++)
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            decrypted_message += message[i] + 9;
        }

        else
        {
            decrypted_message += message[i];
        }
    }
    return decrypted_message;
}

int main()
{

    cout << "\nWelcome to the Encryption algorythm\n Usage:\n 1 for encrypting\n 2 for decrypting \n"
         << endl;
    int choice;
    string message;

    cout << "Enter your choice: " << endl;
    cin >> choice;
    choice = tolower(choice);
    cout << "Enter your message: " << endl;
    cin >> message;

    switch (choice)
    {
    case 1:
        cout << "Encrypted message: " << encrypt(message) << endl;
        break;

    case 2:
        cout << "Decrypted message: " << decrypt(message) << endl;
        break;
    }

    return 0;
}