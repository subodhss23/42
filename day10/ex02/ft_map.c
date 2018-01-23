/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:55:17 by susharma          #+#    #+#             */
/*   Updated: 2018/01/22 15:55:59 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
