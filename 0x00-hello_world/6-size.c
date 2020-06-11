#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;

puts("size of a char: %d byte(s)", (sizeof)(c));
puts("size of an int: %d byte(s)", (sizeof)(i));
puts("size of a long: %d byte(s)", (sizeof)(l));
puts("size of a long long: %d byte(s)", (sizeof)(ll));
puts("size of a float: %d byte(s)", (sizeof)(f));
return (0);
}
