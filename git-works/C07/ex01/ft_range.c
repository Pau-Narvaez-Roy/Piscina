/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:38:57 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/17 12:19:22 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	i;

	i = 0;
	copy = (int *) malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (!copy)
		return (NULL);
	while ((min + i) < max)
	{
		copy[i] = min + i;
		i++;
	}
	return (copy);
}

/*
#include <unistd.h>
int	main(void)
{
	int	*valor;
	int	i;
	int temp;
	int min = 1;
	int max = 7;

	i = 0;
	valor = ft_range(min, max);
	while (i < (max - min) && valor)
	{
		temp = valor[i] + '0';
		write(1, &temp, 1);
		i++;
	}
	return (0);
}
*/
