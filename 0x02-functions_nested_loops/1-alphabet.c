#include "main.h"
/**
 * main - Print lowercase alphabets
 * Description - calling print_alphabet prototype from header
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
