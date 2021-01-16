#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // local variable definition
    int height;

    // prompts user for the height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    //declare a counter for the loop
    int counter = 0;
    // loops adding row of hashes per user instruction
    for (int row = 0 ; row < height; row++)
    {
        // check that the counter variable does not equal the same as the height variable
        if (counter != height)
        {
            for (int spaces = (height - 1) - counter; spaces > 0; spaces--)
            {
                printf(" ");
            }
            for (int hashes = 0; hashes <= counter; hashes++)
            {
                printf("#");
            }
            printf("  ");

            for (int hashes = 0; hashes <= counter; hashes++)
            {
                printf("#");
            }
            printf("\n");
            counter++;

        }
    }
}
