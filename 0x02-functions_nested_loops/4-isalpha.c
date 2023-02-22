#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _isalpha(int c)
{
int i;
for (i = 65; i <= 90 || i <= 122; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
