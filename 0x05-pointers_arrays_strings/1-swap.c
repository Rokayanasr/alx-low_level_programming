#include <stdio.h>
/**
*swap_int - swaps the values of two integers.
*@a: an integer from the ascii key
*@b: an integer from the ascii key
*Return : nothing
*/

void swap_int(int *a, int *b)
{
int others = *a;
*a = *b;
*b = others;
}
