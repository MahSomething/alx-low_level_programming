#include "main.h"

/**
*print_alphabet - will run the loop and send the char to _putchar
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
