#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum all the parameters inside of n.
 *@n:variable of parameters.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int b;
	int sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

		for (b = 0; b < n; b++)
		{
			sum += va_arg(valist, int);
		}
	va_end(valist);

	return (sum);

}
