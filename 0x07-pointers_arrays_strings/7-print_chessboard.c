#include "main.h"

/**
 * print_chessboard - prints chess board.
 * @a: array
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
	int sosy, frao;

	for (sosy = 0; sosy < 8; sosy++)
	{
		for (frao = 0; frao < 8; frao++)
			_putchar(a[sosy][frao]);
		_putchar('\n');
	}
}
