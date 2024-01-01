/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:34:59 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/01 14:59:21 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putadress(unsigned long n)
{
	int count;
	char *hexa = "0123456789abcdef";

	count = 0;
	if (!n)
		count += ft_putstr("0x00");
	else if (n < 16)
		count += ft_putchar(hexa[n]);
	else
	{
		count += ft_putadress(n / 16);
		count += ft_putchar(hexa[(n % 16)]);
	}
	return (count);
}

