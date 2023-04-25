#include "main.h"
/**
 * print_char - prints a character to stdout
 * @args: list that contains the character to be printed
 * Return: count of characters printed.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints a string to stdout
 * @args: list that contains the string to be printed
 * Return: count of characters printed.
 */

int print_str(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_prc - prints a percent sign.
 * @args: listof args (not used)
 * Return: count of characters printed.
 */

int print_prc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
