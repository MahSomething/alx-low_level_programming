/**
* _puts - Receives a ptr to strng and print it using write()
* @str: is the pointer holding the address of strng
*/

#include "main.h"
#include <unistd.h>
void _puts(char *str)
{
write(1, str, sizeof(str));
}
