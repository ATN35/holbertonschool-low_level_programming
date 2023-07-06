#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
