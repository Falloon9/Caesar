#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc <= 1 || argc >= 3)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure user inputs a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        // Convert string to int
        i = atoi(argv[1]);

        // Prompt user for plaintext
        string s = get_string("plaintext:  ");
        printf("ciphertext: ");

        // For each character in the plaintext:
        for (int c = 0; c < strlen(s); c++)

            // Rotate if it's a letter
        {
            if (isupper(s[c]))
                // ci = (pi + k) % 26
            {
                printf("%c", (s[c] - 65 + i) % 26 + 65);
            }
            else if (islower(s[c]))
            {
                printf("%c", (s[c] - 97 + i) % 26 + 97);
            }
            else
            {
                printf("%c", s[c]);
            }
        }
        printf("\n");
    }
}
