#include "main.h"

/**
 * print_binary - print number in binary representation
 *
 * @num: number to convert
 *
 * Return: char len.
 */

int print_binary(unsigned int num)
{
	int len = 1;

	if (num > 1)
		len = len + print_binary(num / 2);

	_write('0' + (num % 2));

	return (len);
}

/**
 * pr_binary - writes the character
 *
 * @list: list of arg.
 *
 * Return: char len
 */
int pr_binary(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);

	return (print_binary(n));
}
