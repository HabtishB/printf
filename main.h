#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)();
} op_t;

int op_integer(va_list list);
int (*get_op_func(const char *s))(va_list list);
int fnc_put_number_recursion(unsigned int number);
int fnc_put_number_binary(unsigned int number);
#endif /* MAIN_H */
