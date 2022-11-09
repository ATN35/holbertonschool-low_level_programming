#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argc is integer
 * @argv: argv is character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argv[0]);

	return (0);
}
