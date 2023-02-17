#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char La;


	for (La = 'a'; La <= 'z'; La++)
	{
		if La != 'e' && La != 'q'
			putchar(La);
	}

	putchar('\n');

	return (o);
}

