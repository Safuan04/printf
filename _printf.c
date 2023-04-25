#include "main.h"
/**
 * _printf - print characters to stdout like to printf.
 * @format: the format of the characters printed
 * Return: the number of characters printed to the stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);
	int i = 0, j = 0, printed_chars = 0;
	int width = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (_isdigit(format[i + 1]))
			{
				width = format[i + 1] - '0';
				for (j = i + 2; _isdigit(format[j]); j++)
					width = width * 10 + (format[j] - '0');
				i = j - 1;
			}
			if (format[i + 1] == '\0')
				return (-1);

			for (; format[i + 1] == ' '; i++)
			{
				if (format[i + 2] == '\0')
				{
					return (-1);
				}
			}
			f = check_format(&format[++i]);
			printed_chars += f ? f(args) : _putchar('%') + _putchar(format[i]);
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
