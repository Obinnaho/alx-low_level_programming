#include "variadic_functions.h"
#include <stdarg.h>

   /**
   * sum_varargs - Returns the sum of all its variable arguments.
   * @count: The number of variable arguments passed to the function.
   * @...: A variable number of arguments to calculate the sum of.
   *
   * Return: If n is 0, returns 0.
  *         Otherwise, returns the sum of all arguments.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

