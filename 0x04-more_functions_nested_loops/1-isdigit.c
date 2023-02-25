#include "main.h"
/**
* _isdigit -a function used to check and return 1 IF its a digit from 0 to 9
* @c: is used to receive the value to be checked by the _isupper()
* Return: zero
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
return (0);
}
