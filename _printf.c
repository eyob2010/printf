#include"stdlib.h"
#include"stdio.h"
#include"main.h"
#include"stdarg.h"
int _printf(const char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		traverse++;
		switch (*traverse)
		{
			case 'c' : i = va_arg(arg, int);
				   putchar(i);
				   break;
			case 's' : s = va_arg(arg, char *);
				   puts (s);
				   break;
		}
	}
	va_end(arg);


}

/**int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/
