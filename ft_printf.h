/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:13:57 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/18 22:16:50 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>

# define HEXAL "0123456789abcdef"
# define HEXAU "0123456789ABCDEF"
# define DEC "0123456789"

int	ft_printchar(int c);
int	ft_printstr(const char *s);
int	ft_strlen(char *str);
int	ft_printnbrbase(unsigned long n, char *base, int lol, char c);
int	ft_printnbr(long long n);
int	ft_variables(char variable, va_list args);
int	ft_printf(const char *s, ...);

#endif