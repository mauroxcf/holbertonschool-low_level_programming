#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 * @argc:counter
 * @argv:pointer string array
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{

int cont;
int cont2;
int result = 0;

if (argc > 1)
{
for (cont = 1; cont < argc; cont++)
{
for (cont2 = 0; argv[cont][cont2] != 0; cont2++)
{
if (!isdigit(argv[cont][cont2]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[cont]);
}
}
else
{
printf("0\n");
return (0);
}

printf("%d\n", result);
return (0);
}




