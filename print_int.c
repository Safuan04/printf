#include "main.h"
/**
 * print_int - prints integers to stdout
 * @args: va_list of integers to be printed
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	char buffer[50];
	int len, i, width = 0;

	_itoa(num, buffer);
	len = _strlen(buffer);

	if (width > len)
	{
		for (i = 0; i < width - len; i++)
			_putchar(' ');
	}
	return (_puts(buffer));
}
