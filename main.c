/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:33:18 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/21 17:23:22 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>

#ifndef PARAM
# define PARAM "this is output for %%"
#endif

int	main()
{
	int len[2];
	printf("\n\n");
	len[0] = printf("%s", PARAM);
	printf("\n\n");
	len[1] = ft_printf("%s", PARAM);
	printf("\n\nlen of printf = %d\nlen of ftprintf = %d\n",len[0],len[1]);
}

/*
0
Hello World
this is output for %%



*/