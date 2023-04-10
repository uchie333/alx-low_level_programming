#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*To ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
