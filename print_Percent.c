#include "main.h"

/**
 * pr_percent - to print percent (%)
 *
 * @list: not used but to get same format
 *
 * Return: char len
 */
int pr_percent(__attribute__((unused)) va_list list)
{
	_write('%');

	return (1);
}
