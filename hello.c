#include <stdio.h>


int print(char *str)
{
	printf("%s\n", str);
	return (1);
}

int add(int a, int b)
{
	return (a +  b);
}

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	print("Bonjour!\n");
	return (0);
}
