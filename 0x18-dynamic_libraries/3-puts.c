#include "holberton.h"

/**
 * puts - output of characters and strings.
 * @s:pointer variable.
 * Return: Always 0.
 */

void _puts(char *s)
{

  int a;

  for (a = 0; s[a] != '\0'; a++)
    {
      _putchar (s[a]);
    }

  _putchar ('\n');
}
