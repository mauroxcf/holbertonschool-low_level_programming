#include "holberton.h"

/**
 * _sqrt_recursion - factorial in recursion.
 * square_checker - counter the iteracions of root square numbers.
 * @n: variable natural number.
 * @counter: counter the interation.
 * Return: Always 0.
 */


int square_checker(int n, int counter)
{
if ((counter * counter) == n)
return (counter);

else if ((counter * counter) > n)
{
return (-1);
}

return (square_checker(n, counter + 1));
}


int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

return (square_checker(n, 1));
}
