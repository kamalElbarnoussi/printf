#include "main.h"

/**
 * pr_int - writes the integer
 *
 * @list: list of args
 *
 * Return: num len.
 */
int pr_int(va_list list)
{
	unsigned int n;
	int v;
	long int rev = 1;
	int len = 0;

	v = va_arg(list, int);

	if (v == 0)
	{
		_write('0');
		return (1);
	}

	if (v < 0)
	{
		_write('-');
		len++;
		n = v * -1;
	}
	else
	{
		n = v;
	}

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	while (rev > 1)
	{
		_write('0' + rev % 10);
		rev /= 10;
		len++;
	}

	return (len);
}
