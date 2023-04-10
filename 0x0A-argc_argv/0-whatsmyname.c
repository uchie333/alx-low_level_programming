#include <stdio.h>
#include "main.h"

/**
 * main - prints out the name of the program
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
