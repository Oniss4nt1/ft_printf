#include <stdarg.h>
#include <stdio.h>

 int sum(int count, ...)
 {
	int sum;
	int index;

	sum = 0;
	index = 0;
	va_list ap;
	va_start(ap, count);
	while (index < count)
	{
		sum += va_arg(ap, int);
		index++;
	}
	va_end(ap);
	return (sum);
 }

int main(void)
{
	int result = sum(4, 3, 3, 3);
	printf("%d\n", result);
	return (0);
}