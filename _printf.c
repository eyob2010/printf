#include"stdlib.h"
#include"stdio.h"
#include"main.h"
int _printf(const char *format, ...)
{
	while (*format != '\0')
	{
		_putchar(*format);
		*format++;
	}
}

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
