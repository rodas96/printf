/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbrbase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:40:21 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/16 19:51:14 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printnbrbase(long long n, char *base, long long baselen, char c)
{
	int	i;

	i = 0;
	if (c == 'p')
	{
		if (!n)
			return (ft_printstr("null"));
		i = ft_printstr("0x");
		i = '0';
	}
	if (n >= baselen)
		i = i + ft_printnbrbase(n / baselen, base, baselen, c);
	return (write(1, &base[n % baselen], 1) + i);
}

int	ft_printnbr(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i = i + ft_printchar('-');
	}
	return (i + ft_printnbrbase(n, DECIMAL, 10, 'd'));
}
