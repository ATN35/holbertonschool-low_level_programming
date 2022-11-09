#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			i += atoi(argv[a]);
		}
		printf("%d\n", i);
	}
	return (0);
}
