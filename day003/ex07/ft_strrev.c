/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:54:28 by susharma          #+#    #+#             */
/*   Updated: 2018/01/12 11:54:07 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strrev(char *str)
{
	int size;
	size = ft_strlen(str);
	int i;
	i = -1;
	char temp;
	while (i !=  size)
{
	temp = str[i];
	str[i] = str[size];
	str[size] = temp;
	i++;
	--str;
}
	return (str);
}


int		main(void)
{
	char *word;
	char sword[] = "Hello";


}
