#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description:
 * This function takes a format string and a vari num of argumen It print
 * the values  the argu based on the format string, where each charac in
 * the format string represents the type of the corresponding argument.
 * - 'c': Prints a character.
 * - 'i': Prints an integer.
 * - 'f': Prints a floating-point number.
 * - 's': Prints a string. If the string is NULL, prints "(nil)".
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
