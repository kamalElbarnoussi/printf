#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*functions used*/
int _printf(const char *format, ...);
int check(const char *format, va_list);
int _write(char c);
int pr_char(va_list);
int pr_int(va_list);
int pr_string(va_list);
int pr_percent(va_list);
int pr_binary(va_list);
int pr_unsigned_int(va_list);
int pr_octal(va_list);
int pr_hex(va_list);
int pr_hex_(va_list);

/**
* struct _sym - defines a structure for symbols and functions
*
* @oper: The operator
* @fn: The function associated
*/
struct _sym
{
	char *oper;
	int (*fn)(va_list);
};
typedef struct _sym struct_sym;

#endif
