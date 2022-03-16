#include "main.h"

/**
 *main - writing a program that prints Holberton followed by a new line.
 *Return: The value 0 is returned.
 */

int main(void)

{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
