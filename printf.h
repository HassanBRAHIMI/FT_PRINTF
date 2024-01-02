/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:45:45 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/02 12:34:01 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *format, ...);
int	ft_putunsigned(unsigned int u);
int	ft_putuhexa(unsigned int i);
int	ft_putlhexa(unsigned int i);
int	ft_putadress(unsigned long n);

#endif
