#include "main.h"

void print_alphabet() /*void print_alphabet() - will print the english aphabet */
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
/*
* print_alphabet - will run the loop and send the char to _putchar
*/
_putchar(i);
}
_putchar('\n');
}
