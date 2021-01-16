#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    printf("Hello there,\n");
    // prompt user for name
    string name = get_string("What's your name?\n");

    // print user's name + includes greeting
    printf("Hello %s, Nice to meet you \n", name);
}
