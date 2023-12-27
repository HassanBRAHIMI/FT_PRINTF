/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:48:01 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/27 17:48:11 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		count += ft_putstr("-2147483648");
	else if(n < 0)
	{
		count += ft_putchar('-');
		n = -n;
		count +=ft_putnbr(n);
	}
	else if (n > 9)
	{
	    count += ft_putnbr(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	else
		count = ft_putchar(n % 10 + '0');
	return (count);
}
