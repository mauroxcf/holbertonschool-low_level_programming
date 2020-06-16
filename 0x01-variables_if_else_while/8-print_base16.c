#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a;
char b;
a = 0;

while (a <= 9)
{
putchar(a + '0');
a++;
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}

putchar('\n');
return (0);
}
