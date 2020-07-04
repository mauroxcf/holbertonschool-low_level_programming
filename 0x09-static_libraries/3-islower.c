#include "holberton.h"

/**
 * _islower - checks for a lower-case character.
 *@c: letter of the alphabet.
 * Return: Always 0.
 */


int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
