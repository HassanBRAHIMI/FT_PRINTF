/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:20:29 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/01 14:43:31 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putlhexa(unsigned int i)
{
	char *lowercase = "0123456789abcdef";
	int count;

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