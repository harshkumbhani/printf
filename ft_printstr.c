/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:39:52 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/26 00:45:42 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int		len;

	len = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		len += ft_putchar(*s);
		s++;
	}
	return (len);
}
