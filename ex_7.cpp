// Practical 7 Aim: Write a program that input a string and should XOR each character in the string with zero display the reason.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = str[i] ^ 127;
        str[i] = str[i] & 127;
    }
    printf("XOR and AND STRING: %s", str);
    return 0;
}
/*Output:
Enter the string: PRASAD-0285
XOR and AND STRING: /->,>;ROMGJ
*/