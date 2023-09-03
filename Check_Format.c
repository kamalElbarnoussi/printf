#include "main.h"

/**
 * functionsList - contain list of functions to be executed
 *
 * Return: array of struct_sym
 */
struct_sym *functionsList()
{
	static struct_sym type_list[] = {
		{"c", pr_char},
		{"s", pr_string},
		{"d", pr_int},
		{"i", pr_int},
		{"%", pr_percent},
		{"b", pr_binary},
		{"u", pr_unsigned_int},
		{"o", pr_octal},
		{NULL, NULL}
	};
	return (type_list);
}

/**
 * check - a function that check format of printf function
 * and send instruction to appropriate method
 *
 * @format: string parameter that hold format from printf
 * @list : va_list parameters that hold parameters from printf
 *
 * Return: number of printed character.
*/

int check(const char *format, va_list  list)
{
	struct_sym *type_list = functionsList();
	int m, b, num_char = 0, find_f;

	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] == '%')
		{
			for (b = 0; type_list[b].oper != NULL; b++)
			{
				if (format[m + 1] == type_list[b].oper[0])
				{
					find_f = type_list[b].fn(list);
					if (find_f == -1)
						return (find_f);
					num_char += find_f;
					break;
				}
			}
			if (type_list[b].oper == NULL && format[m + 1] != ' ')
			{
				if (format[m + 1] != '\0')
				{
					_write(format[m]);
					_write(format[m + 1]);
					num_char += 2;
				}
				else
					return (-1);
			}
			m++;
		}
		else
		{
			_write(format[m]);
			num_char++;
		}
	}
	return (num_char);
}
