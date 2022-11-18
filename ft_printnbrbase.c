/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbrbase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:40:21 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/18 22:16:37 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbrbase(unsigned long n, char *base, int lol, char c)
{
	int	i;

	i = 0;
	if (c == 'p' && lol == 0)
	{
		if (!n)
			return (ft_printstr("(nil)"));
		i += ft_printstr("0x");
	}
	if (n >= ft_strlen(base))
		i = i + ft_printnbrbase(n / ft_strlen(base), base, 1, c);
	return (write(1, &base[n % ft_strlen(base)], 1) + i);
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
	return (i + ft_printnbrbase(n, DEC, 0, 'd'));
}
