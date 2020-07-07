#include "holberton.h"

/**
 * *string_toupper - swap lowercase to uppercase.
 * @a:pointer variable.
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
int cont;
int cont2;

for (cont = 0; a[cont] != '\0'; cont++)
{
for (cont2 = 0; cont2 < cont; cont2++)
{
if (a[cont2] >= 97 && a[cont2] <= 122)
{
a[cont2] = a[cont2] - 32;
}
}
}

return (a);

}
