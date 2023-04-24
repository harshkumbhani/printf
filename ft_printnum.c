/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:48 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/24 16:00:15 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/// @brief Prints number on the terminal, similat to ITOA()
/// @param n The number to be printed
int	ft_putnbr(long n)
{
	int		i;
	char	nbr[14];
	int		len;

	i = 0;
	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		nbr[i++] = 48;
	}
	while (n > 0)
	{
		nbr[i++] = n % 10 + 48;
		n /= 10;
	}
	while (--i >= 0)
		len += ft_putchar(nbr[i]);
	return (len);
}

