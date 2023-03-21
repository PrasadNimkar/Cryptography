// Practical 3 Aim : Implement Polyalphabetic substiution cipher (Veginere Cipher).
#include <stdio.h>
#include <string.h>
int main()
{
    char pt[20] = {'\0'}, ct[20] = {'\0'}, key[20] = {'\0'}, rt[20] = {'\0'};
    int i, j;
    printf("\nEnter the plain text : ");
    scanf("%s", pt);
    printf("\nEnter the key : ");
    scanf("%s", key);
    // length of plaintext equal to length of key
    j = 0;
    for (i = strlen(key); i < strlen(pt); i++)
    {
        if (j == strlen(key))
        {
            j = 0;
        }
        key[i] = key[j];
        j++;
    }
    printf("\nNew key is : %s", key);
    // converting plain text to cipher text (encryption)
    for (i = 0; i < strlen(pt); i++)
    {
        ct[i] = (((pt[i] - 97) + (key[i] - 97)) % 26) + 97;
    }
    printf("\n\nCipher text is : %s", ct);
    // converting cipher text to plain text (decryption)
    for (i = 0; i < strlen(ct); i++)
    {
        if (ct[i] < key[i])
        {
            rt[i] = 26 + ((ct[i] - 97) - (key[i] - 97)) + 97;
        }
        else
            rt[i] = (((ct[i] - 97) - (key[i] - 97)) % 26) + 97;
    }
    printf("\n\nPlain text is : %s", rt);
}
/*Output:
Enter the plain text : prasadnimkar

Enter the key : sipna

New key is : sipnasipnasi

Cipher text is : hzpfavvxzksz

Plain text is : prasadnimkar
*/