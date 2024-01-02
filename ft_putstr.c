/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:44:56 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/27 17:45:00 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "printf.h"

int ft_putstr(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}