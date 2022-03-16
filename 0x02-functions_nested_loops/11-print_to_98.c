https://github.com/Yonashenok/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c#:~:text=Blame-,%23include%20%3Cstdio.h%3E,%7D,-%C2%A9%202022%20GitHub%2C%20Inc#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
