/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:48:54 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/02/01 16:23:13 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int u)
{
	int	count;

	count = 0;
	if (u > 9)
	{
		count += ft_putunsigned(u / 10);
		count += ft_putchar(u % 10 + '0');
	}
	else
		count += ft_putchar(u % 10 + '0');
	return (count);
}




