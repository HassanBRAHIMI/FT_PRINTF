/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 11:54:46 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/25 13:27:47 by hbrahimi         ###   ########.fr       */
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
		i++;
	}
	va_end(args);
	return (count);
}
