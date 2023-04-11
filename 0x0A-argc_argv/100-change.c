#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins
* @argc: arguement count
* @argv: arguement vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int n, i, v;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	v = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			v++;
			n -= coins[i];
		}
	}

	printf("%d\n", v);
	return (0);
}
