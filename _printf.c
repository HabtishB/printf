#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf- prints any arguement
 * convert: converts integer number into octal, hex, etc.
 * @format: is a character pointer
 *
 * Return: returns an integer
 */

void _printf(char *,...);
char* convert(unsigned int, int);

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

case 'd':
printedchar = va_arg(arg,int);
if(printedchar<0)
{
printedchar = -printedchar;
_putchar('-');
}
puts(convert(Printedchar,10));
break;

case 'i':
printedchar = va_arg(arg,int);
if(printedchar<0)
{
printedchar=-printedchar;
_putchar('-');
}
puts(printedchar);
break;

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

return(charCount);
}

char *convert(unsigned int num, int base)
{
static char Representation[]= "0123456789ABCDEF";
static char buffer[50];
char *ptr;

*ptr = '\0';

do
{
*--ptr = Representation[num%base];
num /= base;
}while(num != 0);

return(ptr);



