#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings.
 *@separator: separator.
 *@n: variable.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *b;

	va_start(valist, n);

	if (!separator)
	{
		separator = "";
	}

	b = va_arg(valist, char *);

	for (a = 0; a < n; a++)
	{
		if (!b)
		{
			printf("(nil)");
		}
		else
			printf("%s", b);
		b = va_arg(valist, char *);

			if (a + 1 != n)
			{
				printf("%s", separator);
			}

	}
	printf("\n");
}
