#include "main.h"
/**
 * check_format - to check format of a character
 * @format: format of the argument
 * Return: pointer to a appropriate function or NULL if no match is found
 */
int (*check_format(const char *format))(va_list)
{
	int i;

	func_t types[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_prc},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	for (i = 0; types[i].p != NULL; i++)
	{
		if (*(types[i].p) == *format)
		{
			return (types[i].f);
		}
	}
	return (NULL);
}
