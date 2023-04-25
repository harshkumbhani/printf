/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:48 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/26 01:08:52 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/// @brief Prints number on the terminal, similat to ITOA()
/// @param n The number to be printed
int	ft_putnbr(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	else if (n == 0)
		return (ft_putchar('0'));
	if (n / 10)
		len += ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_puthex(uintptr_t n, char *base)
{
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_puthex(n / 16, base);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putptr(long int n)
{
	char	*base;
	int		len;
	
	len = 0;
	base = "0123456789abcdef";
	len += ft_putstr("0x");
	len += ft_puthex(n, base);
	return (len);
}
