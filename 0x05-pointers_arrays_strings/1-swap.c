#include "main.h"
/**
* swap_int - function that swaps the values of two integers
* @a: input parameter 1
* @b: input parameter 2
*/
void swap_int(int *a, int *b)
{
int num;
num = *a;
*a = *b;
*b = num;
}
