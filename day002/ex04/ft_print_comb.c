/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 20:57:52 by susharma          #+#    #+#             */
/*   Updated: 2018/01/10 22:02:52 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	b = 0;
	c = 1;
	while (a++ <= 7)
	{
		b = a + 1;
		while (b++ <= 8)
		{
			c = b + 1;
			while (c++ <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
