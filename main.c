/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:33:18 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/04/26 01:03:55 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>

#ifndef PARAM
# define PARAM "this is output for a string"
#endif

int	main()
{
	int len[2];
	char	c;
	c = 'a';
	printf("\n\n");
	len[0] = printf(" NULL %p NULL ", "");
	//len[0] = printf("This is a string %s", 123);
	printf("\n\n");
	len[1] = ft_printf(" NULL %p NULL ", "");
	//len[1] = printf("This is a string %s", 123);
	printf("\n\nlen of printf = %d\nlen of ftprintf = %d\n",len[0],len[1]);
}

/*
0
Hello World
this is output for %%
*/