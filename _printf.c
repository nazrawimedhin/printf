#include "main.h"

/**
  *_printf - prints formatted output.
  *@format: input.
  *
  *Return: number of chars printed.
  */

int _printf(const char *format, ...)
{
	int char_count = 0; /* Total number of chars printed to stdout */
	va_list ap; /* Contains the list of arguments passed after format */
	int i; /* Used to loop through all characters in format */

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
			continue;
		}

		if (format[i + 1] == '\0')
		{
			return (-1);
		}

		char_count += get_printing_func(format[i + 1], &ap);
		i++;
	}
	return (char_count);
}
