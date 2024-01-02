/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:20:29 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/02 19:03:40 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlhexa(unsigned int i)
{
	char	*lowercase;
	int		count;

	lowercase = "0123456789abcdef";
	count = 0;
	if (i < 16)
		count += ft_putchar(lowercase[i]);
	else
	{
		count += ft_putlhexa(i / 16);
		count += ft_putchar(lowercase[(i % 16)]);
	}
	return (count);
}
