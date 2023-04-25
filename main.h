#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * struct func - Struct func
 *
 * @p: The operator
 * @f: The function associated
 */
typedef struct func
{
	char *p;
	int (*f)(va_list);
} func_t;

int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
unsigned int _strlen(char *s);
void reverse_str(char s[]);
void _itoa(long n, char s[]);
int _isdigit(int c);
int _puts(char *str);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_prc(va_list args);
int print_int(va_list args);
#endif
