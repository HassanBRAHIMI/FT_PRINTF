/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:14 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/27 18:03:55 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	i = 0;
	va_start (args, format);
	while(format[i])
	{
		if (format[i] == '%' && format[i + 1])
			i++;
		if (format[i] == 'c')
		{
			count += ft_putchar(va_arg(args, char));
			i++;
		}
		if (format[i] == 's')
		{
			count += ft_putstr(va_arg(args, char *));
			i++;
		}
		if (format[i] == 'i' || format[i] == 'd')
		{
			count += ft_putnbr(va_arg(args, int));
			i++;
		}
		if (format[i] == 'u')
		{
			count += ft_putunsigned(va_arg(args, unsigned int));
			i++;
		}
		if (format[i] == '%')
		{
			count += ft_putstr("%%");
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
