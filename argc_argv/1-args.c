#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
