#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int byte, k;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (k = 0; k < byte; k++)
	{
		if (k == byte - 1)
		{
			printf("%02hhx\n", array[k]);
			break;
		}
		printf("%02hhx ", array[k]);
	}
	return (0);
}

