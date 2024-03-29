#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to b print between num If NULL, no separat is print
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Description: This func take variable num of integers and prints them to
 * the standard output, separat by the specifi separat string.If the separator
 * is NULL, no separator is printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}
