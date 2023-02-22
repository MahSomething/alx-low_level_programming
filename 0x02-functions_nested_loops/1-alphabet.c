#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
/**
 * print_alphabet - will run the loop and send the char to _putchar
 *
 * Return: Always 0.
 */
	void print_alphabet(void)
	{
	for (char letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
	}
return (0);
}
