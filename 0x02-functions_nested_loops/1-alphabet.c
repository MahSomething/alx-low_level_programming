#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

/*
*void print_alphabet() - will print the english aphabet
*/
void print_alphabet(void)
{
/**
*letter - will interrate throug all the ASCII code
*/
char i;
for (i ='a'; i <= 'z'; i++)
{
/**
* print_alphabet - will run the loop and send the char to _putchar 
*/
_putchar(i);
}
_putchar('\n');
}
