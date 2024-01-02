/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:09:16 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/01 14:44:02 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putuhexa(unsigned int i)
{
	char	*uppercase;
	int		count;

	uppercase = "0123456789ABCDEF";
	count = 0;
	if (i < 16)
		count += ft_putchar(uppercase[i]);
	else
	{
		count += ft_putuhexa(i / 16);
		count += ft_putchar(uppercase[(i % 16)]);
	}
	return (count);
}
