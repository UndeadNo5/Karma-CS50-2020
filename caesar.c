#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
// Validate argv is a single input
    if (argc != 2)
    {
        printf("Usage: ./casesar key \n");
        return 1;
    }
    int n = strlen(argv[1]);
// Validate that argv is a digit
    for (int i = 0; i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage:./caesar key\n");
            return 1;
        }
    }
// Cast argv to a int
    int key = atoi(argv[1]);
// Divide so key is a single transfer through alpha
    if (key >= 26)
    {
        key = key % 26;
    }
// Get text from user to crypt
    string ptext = get_string("plaintext: ");
    int j = strlen(ptext);
    printf("ciphertext: ");
    for (int i = 0; i < j; i++)
    {
// Determine whether char is lower alpha
        if (ptext[i] >= 'a' && ptext[i] <= 'z')
        {
// Add the key to the ascii decimal number
            int cipher = ptext[i] + key;
            if (cipher > 122)
            {
// Wrap the cipher around if it plus key is greater than z
                cipher = cipher - 26;
            }
            printf("%c", cipher);
        }
// Do the same as above for upper
        else if (ptext[i] >= 'A' && ptext[i] <= 'Z')
        {
            int cipher = ptext[i] + key;
            if (cipher > 90)
            {
                cipher -= 26;
            }
            printf("%c", cipher);
        }
// Preserve all other charcaters as is
        else
        {
            printf("%c", ptext[i]);
        }
    }
    printf("\n");
// Exit the program
    return 0;
}
