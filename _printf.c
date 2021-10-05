#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf- prints any arguement
 * @format: is a character pointer
 *
 * Return: returns an integer
 */

int _printf(const char *format, ...)
{
va_list arglist;
int charCount = 0;
int printedChar;
char *printedString;

va_start(arglist, format);

while(*format)
{
if (*format == '%')
{
format++;
switch(*format)
{
case 'c':
printedChar = va_arg(arglist, int);
_putchar(printedChar);
format++;
charCount++;
break;

case 's':
{
printedString = va_arg(arglist, char *);
while (*printedString)
{
_putchar(*printedString);
printedString++;
}
format++;
charCount += _strlen(printedString);
break;
}

case '%':
_putchar('%');
format++;
charCount++;
break;

case '\0':
break;

default:
_putchar('%');
_putchar(*format);
format++;
charCount += 2;
}
}
 else
{
_putchar(*format);
format++;
charCount++;
}
}
va_end(arglist);

return charCount;
}

