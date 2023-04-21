/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:41 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/21 17:16:12 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *)format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len+=ft_putchar('%');
		}
		else 
		{
			write(1, str, 1);
			len++;
		}
			str++;
	}
	return (len);
}
