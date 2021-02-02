#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for the starting population
    int start_pop; //variable that holds the starting population size
    do
    {
        start_pop = get_int("Starting Population: ");
    }
    while (start_pop < 9);

    //Prompts the user for the target population
    int end_pop; //variable that holds the end/target population size
    do
    {
        end_pop = get_int("Target Population: ");
    }
    while (end_pop < start_pop);

    // Calculate number of years until we reach the target population
    int years = 0;
    while (start_pop < end_pop)
    {
        start_pop = start_pop + (start_pop / 3) - (start_pop / 4);
        years++;
    }

    //Print number of years required to reach the target population
    printf("Years: %i\n", years);
}
