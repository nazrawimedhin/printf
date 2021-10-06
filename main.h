#ifndef _PRINTF_MAIN_H
#define _PRINTF_MAIN_H

#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"

int _putchar(char c);
int _printf(const char *format, ...);
int put_str(char *str);
int put_int(int n);
int get_printing_func(char a, va_list *ap);
int put_rot13(char *s);
char *rot13(char *s);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* _PRINTF_MAIN_H */
