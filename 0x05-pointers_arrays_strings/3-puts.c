#include "main.h"
#include <unistd.h>
int _strlen(char *s);
void _puts(char *str)
{
int sizeOfStrng = _strlen(str);
 write(1, &str, sizeOfStrng);
}
