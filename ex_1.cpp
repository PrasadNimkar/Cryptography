// Practical 1 Aim: Write a program to implement substitution cipher (Caesar Cipher).
#include <iostream>
using namespace std;
string encrypt(string text, int s)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}
int main()
{
    string text = "PrasadNimkar";
    int s = 3;
    cout << "Text : " << text;
    cout << "\nShift : " << s;
    cout << "\nCipher : " << encrypt(text, s);
    return 0;
}

/* Output:
Text : PrasadNimkar
Shift : 3
Cipher : SudvdgQlpndu
*/