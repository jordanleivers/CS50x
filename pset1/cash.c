#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Quarter = 25c, Dime = 10c, Nickel =5c, Pence = 1c

int main(void)
{

    float change_required; //Prompt user for change required
    do // Loop through until a positive number is given
    {
        change_required = get_float("How much change is required: ");
    }
    while (change_required < 0); // Positive number condition


    int convert_cents = round(change_required * 100); //convert dollars to cents
    int coins = 0; //initial amount of coins

    while (convert_cents >= 25) //loop for quaters
    {
        convert_cents = convert_cents - 25;
        coins++;
    }
    while (convert_cents >= 10) //loop for dimes
    {
        convert_cents = convert_cents - 10;
        coins++;
    }
    while (convert_cents >= 5) //loop for nicles
    {
        convert_cents = convert_cents - 5;
        coins++;
    }
    while (convert_cents >= 1 && convert_cents > 0) //loop for pennies
    {
        convert_cents = convert_cents - 1;
        coins++;
    }

    printf("Coins required: %d\n", coins); //printing total amount of coins

}