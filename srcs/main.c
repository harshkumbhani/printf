/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:33:18 by hkumbhan          #+#    #+#             */
/*   Updated: 2024/07/05 13:16:34 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>

#ifndef PARAM
# define PARAM "this is output for a string"
#endif

int	main(void)
{
	int	len[2];

	printf("\n----- PRINTF -----\n");
	len[0] = printf(PARAM);
	printf("\n----- FT_PRINTF -----\n");
	len[1] = ft_printf(PARAM);
	printf("\n\nlen of printf = %d\nlen of ftprintf = %d\n", len[0], len[1]);
}

// Some prefined tests
//len[0] = printf("This is a string %s", 123);
//len[1] = printf("This is a string %s", 123);