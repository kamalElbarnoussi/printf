#include "main.h"

/**
 * pr_char - writes the character.
 *
 * @list: list of arg.
 *
 * Return: char len
 */
int pr_char(va_list list)
{
	_write(va_arg(list, int));

	return (1);
}
