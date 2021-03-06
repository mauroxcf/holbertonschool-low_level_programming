#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 *@dest: pointer value.
 *@src:pointer value
 *@n: variable value.
 * Return: dest return value.
 */

char *_strncat(char *dest, char *src, int n)
{

int dest_c;
int src_c;

dest_c = 0;
src_c = 0;

while (dest[dest_c] != '\0')
{
dest_c++;
}

while (src[src_c] != '\0' && src_c < n)
{

dest[dest_c] = src[src_c];
dest_c++;
src_c++;
}

dest[dest_c] = '\0';

return (dest);

}
