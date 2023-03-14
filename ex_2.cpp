// Practical 2 Aim: Write a program to implement substitution cipher (Caesar Cipher) by user input.
#include <iostream>
#include <string.h>
using namespace std;
void encryptyfunc()
{
    char text[100];
    char temp;
    int i, key;
    cout << "Enter a message to encrypt: " << endl;
    cin >> text;
    cout << "Enter key: " << endl;
    cin >> key;
    for (i = 0; text[i] != '\0'; ++i)
    {
        temp = text[i];
        if (temp >= 'a' && temp <= 'z')
        {
            temp = temp + key;

            if (temp > 'z')
            {
                temp = temp - 'z' + 'a' - 1;
            }

            text[i] = temp;
        }
        else if (temp >= 'A' && temp <= 'Z')
        {
            temp = temp + key;

            if (temp > 'Z')
            {
                temp = temp - 'Z' + 'A' - 1;
            }

            text[i] = temp;
        }
    }

    cout << "Encrypted message:" << text << endl;
}
void decryptfunc()
{
    char text[100];
    char temp;
    int i, key;
    cout << "Enter a message to decrypt: " << endl;
    cin >> text;
    cout << "Enter key: " << endl;
    cin >> key;
    for (i = 0; text[i] != '\0'; ++i)
    {
        temp = text[i];
        if (temp >= 'a' && temp <= 'z')
        {
            temp = temp - key;

            if (temp < 'a')
            {
                temp = temp + 'z' - 'a' + 1;
            }

            text[i] = temp;
        }
        else if (temp >= 'A' && temp <= 'Z')
        {
            temp = temp - key;

            if (temp < 'A')
            {
                temp = temp + 'Z' - 'A' + 1;
            }

            text[i] = temp;
        }
    }
    cout << "Decrypted message:" << text << endl;
}
int main()
{
    int choice;
    cout << "Choose any one option" << endl;
    cout << "1.Encryption \n2.Decryption" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        encryptyfunc();
        break;
    case 2:
        decryptfunc();
        break;
    default:
        cout << "Please select valid option";
        break;
    }
    return 0;
}
/* Output:
Choose any one option
1.Encryption
2.Decryption
1
Enter a message to encrypt:
PrasadNimkar
Enter key:
3
Encrypted message:SudvdgQlpndu

Choose any one option
1.Encryption
2.Decryption
2
Enter a message to decrypt:
SudvdgQlpndu
Enter key:
3
Decrypted message:PrasadNimkar
*/