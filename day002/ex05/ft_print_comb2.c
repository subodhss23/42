/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:08:34 by susharma          #+#    #+#             */
/*   Updated: 2018/01/11 16:06:33 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{

	int a;
	int u;
	int d;

	a	= 0;
	while( a++ <= 10000 )
	{
		u = a / 100;
		d = a % 100;
		if (u < d)
		{
			if ( a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + u / 10);
			ft_putchar(48 + u % 10);
			ft_putchar(' ');
			ft_putchar(48 + d / 10);
			ft_putchar(48 + d % 10);
		}
	}
}
