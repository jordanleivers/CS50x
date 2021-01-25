#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2) //checks if run with one command-line argument.
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++) //checks if all char are digits
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]); // converts command-line arument from a string to an int
    string msg = get_string("plaintext: "); //prompts user for plaintext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        if (isupper(msg[i])) //rotates uppercase letters.
        {
            printf("%c", (((msg[i] - 65) + key) % 26) + 65 );
        }
        else if (islower(msg[i])) //rotates lowercase letters
        {
            printf("%c", (((msg[i] - 97) + key) % 26) + 97 );
        }
        else
        {
            printf("%c", msg[i]); //prints everything else without rotating.
        }
    }
    printf("\n");
    return 0;