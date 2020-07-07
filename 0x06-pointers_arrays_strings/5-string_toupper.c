B#include "holberton.h"

/**
 * *string_toupper - swap lowercase to uppercase.
 * @a:pointer variable.
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
int cont;
int cont2;

for (cont = 0; cont[a] != '\0'; cont++)
{
for (; cont2 < cont; cont2++)
{
if (cont2[a] >= 97 && cont2[a] <= 122)
{
cont2[a] = cont2[a] - 32;
}
}
}

return (a);

}
