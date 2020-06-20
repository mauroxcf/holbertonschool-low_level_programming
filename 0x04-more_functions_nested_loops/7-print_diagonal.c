#include "holberton.h"

/**
 * print_diagonal - print diagonal lines .
 * @n: variable
 * @m: numbers of times thats gonna affect the lines or spaces
 * @p: numbers of spaces
 * Return: Always 0.
 */

void print_diagonal(int n)
{

  int m, p;

  for (m = 0; m < n; m++)
    {
      for (p = 0; p < m; p++)
	
	  _putchar (32);
	  _putchar (92);
	  _putchar ('\n');
	}
  if (n < 0)   
  _putchar ('\n');
    }

