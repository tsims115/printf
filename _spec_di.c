#include "main.h"
/**
 * _spec_di.c - prints integer and returns how many character printed
 * @n: number to print
 *
 *
 */
int _spec_di(va_list *args)
{
	int i;
	char s[13];
	int stri = va_arg(*args, int);
	char *stra = _itoa(stri, s, 10);

	i = 0;
	while (stra[i] != '\0')
		{
			_putchar(stra[i]);
			i++;
		}
	return (i);
}
