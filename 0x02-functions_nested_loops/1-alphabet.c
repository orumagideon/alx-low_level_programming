#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet using _putchar
 *
 * Description: This function prints all the lowercase letters of the
 * alphabet, from 'a' to 'z', using the _putchar function.
 */



	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
