#include "main.h"
/**
 *_abs - Returns the Absolute value of any number
 * @number: is a in intiger value
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _abs(int number)
{
if (number < 0)
{
number = number * (-1);
}
return (number);
}
