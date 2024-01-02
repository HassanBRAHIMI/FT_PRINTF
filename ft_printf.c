/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:14 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/01 15:29:42 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_format(va_list args, char specifier)
{
	int	count;
	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'i' || specifier == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (specifier == '%')
		count += ft_putstr("%%");
	else if (specifier == 'x')
		count += ft_putlhexa(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += ft_putuhexa(va_arg(args, unsigned int));
	else if (specifier == 'p')
	{
		
		count += ft_putadress(va_arg(args, unsigned long));
	}
	return (count);
}
int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	i = 0;
	count = 0;
	va_start (args, format);
	while(format[i])
	{

		if (format[i] == '%' && format[i + 1])
		{
			ft_format(args, format[i + 1]);
			i++;
		}
		// {
		// 	if (format[i + 1] == 'c')
		// 	{
		// 		count += ft_putchar(va_arg(args, int));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 's')
		// 	{
		// 		count += ft_putstr(va_arg(args, char *));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 'i' || format[i + 1] == 'd')
		// 	{
		// 		count += ft_putnbr(va_arg(args, int));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 'u')
		// 	{
		// 		count += ft_putunsigned(va_arg(args, unsigned int));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == '%')
		// 	{
		// 		count += ft_putstr("%%");
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 'x')
		// 	{
		// 		count += ft_putlhexa(va_arg(args, unsigned int));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 'X')
		// 	{
		// 		count += ft_putuhexa(va_arg(args, unsigned int));
		// 		i++;
		// 	}
		// 	else if (format[i + 1] == 'p')
		// 	{
		// 		count += ft_putstr("0x");
		// 		count += ft_putadress(va_arg(args, unsigned long));//u gotta handle 0x00
		// 		i++;
		// 	}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
int ft_printf(const char *format, ...);

int main() {
    char c = 'A';
    char *str = "Hello, World!";
    int integer = 123;
    unsigned int unsignedInteger = 456;
    unsigned long pointerValue = (unsigned long)&main;

    ft_printf("Character: %c\n", c);
    ft_printf("Testing ft_printf:\n");
    ft_printf("String: %s\n", str);
    ft_printf("Integer: %d\n", integer);
    ft_printf("Unsigned Integer: %u\n", unsignedInteger);
    ft_printf("Hexadecimal (lowercase): %x\n", unsignedInteger);
    ft_printf("Hexadecimal (uppercase): %X\n", unsignedInteger);
    ft_printf("Address: %p\n", (void *)pointerValue);

    return 0;
}
