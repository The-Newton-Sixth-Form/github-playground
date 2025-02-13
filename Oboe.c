# include <cs50.h>
# include <stdio.h>

int main(void)
{
    string var = get_string("What's your name? \n");
    printf("Hello, %s\n", var);
}