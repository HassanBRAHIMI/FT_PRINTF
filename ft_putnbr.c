/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:11:04 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/25 13:26:55 by hbrahimi         ###   ########.fr       */
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
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
	    ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		count += ft_putchar(n % 10 + '0');
	return (count);
}
#include <stdio.h>

int main()
{
	int x = ft_putnbr(123);
	printf("%d\n", x);
}
