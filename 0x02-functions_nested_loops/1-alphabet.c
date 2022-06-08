#include "main.h"
/**
 * main - Print lowercase alphabets
 * Description - calling print_alphabet prototype from header
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
