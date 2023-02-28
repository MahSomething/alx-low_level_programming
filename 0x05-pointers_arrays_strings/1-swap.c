/**
* swap_int - A function that Swaps the address of two pointers a and b
* @a: Receives the address of an int
* @b: Receives the address of an int
*/

void swap_int(int *a, int *b)
{
int TempVar;
	TempVar = *a;
	*a = *b;
	*b = TempVar;
}
