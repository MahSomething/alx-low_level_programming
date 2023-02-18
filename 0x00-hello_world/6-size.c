#include <stdio.h>

int main(void)
{
int a=sizeof(int);
int b=sizeof(char);
int c=sizeof(long int);
int d=sizeof(long long int);
	printf("Size of a char: %d byte(s)\n", b);
	printf("Size of a int: %d byte(s)\n", a);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
return (0);
}
