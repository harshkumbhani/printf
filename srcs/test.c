/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsh <harsh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:08:25 by hkumbhan          #+#    #+#             */
/*   Updated: 2024/07/05 13:21:06 by harsh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(int c, char**v)
{
	int	p;
	int	i;

	p = 0;
	i = 1;
	while (i < c)
	{
		p = 0;
		while (v[i][p] != 0)
		{
			write(1, &v[i][p], 1);
			p++;
		}
		i++;
	}
	return (0);
}

// int main(int c, char**v)
// {
// 	int p = 0;
// 	for (int i = 2; i < c; i++)
// 	{
// 			write(1,v[i],strlen(v[i]));
// 			p++;
// 	}
// 	return(0);
// }