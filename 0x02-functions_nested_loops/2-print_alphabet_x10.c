#include "main.h"

/**
*print_alphabet_x10 - will run the loop and send the char to _putchar
*/
void print_alphabet_x10(void)
{
char i;
int j = 1;

while (j <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}
