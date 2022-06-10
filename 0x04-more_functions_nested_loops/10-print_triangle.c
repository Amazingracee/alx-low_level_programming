#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int c, d;

	for (c = 0; c < size; c++)
	{
		for (d = 1; d < (size - c); d++)
			_putchar(' ');
		for (d--; d < size; d++)
			_putchar(35);
		if (c < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
