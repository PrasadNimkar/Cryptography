// Practical 10 Aim:Write a program to implement your own S/T (substition/transposition) tecnique.
#include <stdio.h>
#include <stdlib.h>
char encrpt[100];
char decrpt[100];
int shfit;
void encrypt(char *plain)
{

    printf("ENTER THE KEY VALUE : ");
    scanf("%d", &shfit);
    int i = 0;

    while (*(plain + i) != '\0')
    {
        if (plain[i] >= 'a' && plain[i] <= 'z')
        {
            int ch = plain[i];
            encrpt[i] = encrpt[i] + (((ch - 97 + shfit) % 26) + 97);
        }
        else if (plain[i] >= 'A' && plain[i] <= 'Z')
        {
            int ch = plain[i];
            encrpt[i] = encrpt[i] + (((ch - 65 + shfit) % 26) + 65);
        }
        i++;
    }
}
void crp()
{
    int i = 0;
    while (*(encrpt + i) != '\0')
    {
        if (encrpt[i] >= 'a' && encrpt[i] <= 'z')
        {
            int ch = encrpt[i];
            decrpt[i] = decrpt[i] + ((ch - 97 - shfit) % 26) + 97;
        }
        else if (encrpt[i] >= 'A' && encrpt[i] <= 'Z')
        {
            int ch = encrpt[i];
            decrpt[i] = decrpt[i] + ((ch - 65 - shfit) % 26) + 65;
        }
        i++;
    }
}
int main()
{
    char plain[100];
    printf("ENTER PLAIN TEXT : ");
    scanf("%s", plain);
    encrypt(plain);
    printf("\nENCRYPTED MESSAGE :%s\n", encrpt);
    crp();
    printf("DECRYPTED MESSAGE :%s", decrpt);
}
/*Output:
ENTER PLAIN TEXT : PrasadNimkar
ENTER THE KEY VALUE : 3

ENCRYPTED MESSAGE :SudvdgQlpndu
DECRYPTED MESSAGE :PrasadNimkar
*/