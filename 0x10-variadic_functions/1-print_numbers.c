B#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers one after one.
 *@separator: separator.
 *@n: parameters.
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int b;

	b = 0;

	va_start(valist, n);

	if (!separator)
	{
		separator = "";
	}

	for (a = 0; a < n; a++)
	{
		b = va_arg(valist, int);
		printf("%d", b);
		if (a + 1 != n)
		{
			printf("%s", separator);
		}

	}

	va_end(valist);

	printf("\n");

}
