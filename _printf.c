#include "main.h"

/**
 * _printf - function to print any format
 *
 * @format: string containing all format and string to print
 * @...: va_list parameter to receive all symbol to print
 *
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	int num_char;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	num_char = check(format, list);

	va_end(list);

	return (num_char);
}
