#include <stdarg.h>
#include <stdio.h>

float average(int count, ...)
{
    float sum = 0.0;
    int index = 0;

    va_list ap;
    va_start(ap, count);
    while (index < count)
    {
        if (index % 2 == 0)
        {
            sum += va_arg(ap, int);
        }
        else
        {
            sum += va_arg(ap, double);
        }
        index++;
    }
    va_end(ap);
    return (sum / count);
}

int main(void)
{
    float result = average(4, 5, 2.5, 10, 3.7);
    printf("The media is: %.2f\n", result);
    return (0);
}