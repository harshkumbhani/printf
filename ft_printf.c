/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:41 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/26 01:15:03 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formattype(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'x')
		len += ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'd' || c == 'i')
		len += ft_putnbr((long)va_arg(ap, int));
	else if (c == 'u')
		len += ft_putnbr(va_arg(ap, unsigned int));
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'p')
		len += ft_putptr((long int)va_arg(ap, void *));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	char	*str;
	va_list	ap;

	len = 0;
	str = (char *)format;
	va_start(ap, format);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_formattype(*str, ap);
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	va_end(ap);
	return (len);
}
