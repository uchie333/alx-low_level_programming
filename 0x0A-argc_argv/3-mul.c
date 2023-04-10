#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int a, d, n, length, f, i;

a = 0;
d = 0;
n = 0;
length = 0;
f = 0;
i = 0;

while (s[length] != '\0')
length++;

while (a < length && f == 0)
{
if (s[a] == '-')
++d;

if (s[a] >= '0' && s[a] <= '9')
{
i = s[a] - '0';
if (d % 2)
i = -i;
n = n * 10 + i;
f = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
f = 0;
}
a++;
}

if (f == 0)
{
return (0);
}

return (n);
}

/**
 * main - multiplies 2 numbers
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int value, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
value = num1 * num2;

printf("%d\n", value);
return (0);
}
