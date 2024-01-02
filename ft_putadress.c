/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:34:59 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/02 20:45:12 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long n)
{
	int		count;
	char	*hexa;

	hexa = "0123456789abcdef";
	count = 0;
	if (!n)
		count += ft_putstr("0");
	else if (n < 16)
		count += ft_putchar(hexa[n]);
	else
	{
		count += ft_putadress(n / 16);
		count += ft_putchar(hexa[(n % 16)]);
	}
	return (count);
}
