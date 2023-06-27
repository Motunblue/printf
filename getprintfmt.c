#include "main.h"

/**
 * print_fmt - a function that calls other functions
 * @c: the character
 * @list: aregument list
 * Return: 0
 */

int print_fmt(char c, va_list list)
{
int count = 0;
switch (c)
{
case 'c':
count += print_char((char)va_arg(list, int));
break;
case 's':
count += print_str(va_arg(list, char*));
break;
case ('S'):
count += print_S(va_arg(list, char*));
break;
case ('d'):
count += print_int((long)va_arg(list, int), 10);
break;
case ('i'):
count += print_int((long)va_arg(list, int), 10);
break;
case ('b'):
count += print_int((long)va_arg(list, int), 2);
break;
case ('o'):
count += print_int((long)va_arg(list, int), 8);
break;
case ('x'):
count += print_hex((long)va_arg(list, int), 'x');
break;
case ('X'):
count += print_hex((long)va_arg(list, int), 'X');
break;
case ('p'):
count += print_ptr(va_arg(list, void*));
break;
default:
if (c != '%')
count += print_char('%');
count += print_char(c);
break;
}
return (count);
}