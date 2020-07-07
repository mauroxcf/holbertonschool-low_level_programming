#include "holberton.h"

/**
 * swap_int - swap intengers value.
 * @a:pointer variable.
 * @n:pointer variable.
 * Return: Always 0.
 */

void swap_int(int *a, int *n)
{

int temp;
temp = *a;

*a = *n;
*n = temp;

}


/**
 * reverse_array - function a reverse array.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{

int cont;

for (cont = 0; cont < n / 2; cont++)
{

swap_int(a + cont, a + n - cont - 1);

}

}
