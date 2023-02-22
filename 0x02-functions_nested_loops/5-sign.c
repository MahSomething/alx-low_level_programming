#include "main.h"
/**
 * print_sign - Shows 1 if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @n: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int print_sign(int n)
{
if (n > 0)
	{
	return (1);
	_putchar('+');
	}
		else if (n == 0)
		{
		return (0);
		_putchar('0');
		}
			else
			{
			return (-1);
			_putchar('-');
			}
return (0);
}
