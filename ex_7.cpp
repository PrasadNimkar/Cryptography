// Practical 7 Aim: Write a program that input a string and should XOR each character in the string with zero display the reason.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello World";
    int i, len;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        printf("%c", str[i] & 127);
    }
    printf("\n");
}
/*Output:
Hello World
*/