#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _printf - Custom printf function
 * @format: The format string containing format specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _putchar(char C)
{
	return(write(1,&c,1));
}
int handle_string(char *str)
{
	(null);
}
int _printf(const char *format, ...)
{
	int count =0;
	va_list args;
	va_start(args,format[0]);
	if(!format || !format [0])
		retutn(-1);
	while(*format)
	{
		if(*format =='%')
		{
			
		        format++;
		        if(*format == 'c')
		        {
			       char c =va_arg (args,int);
			       count += _putchar (c);
		        }
		        else if (*format == 's')
		        {
			        char *str = va_arg(args ,char *);
			        count += handle_string(str);
		        }
		        else if (*format == '%')
		        {
			        _putchar('%');
			        count ++;
		        }
		        else
		        {
			        _putchar(*format);
			        count ++;
		        }
		}	
	}	
}
