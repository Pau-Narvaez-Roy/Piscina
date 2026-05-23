/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:12:32 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/17 10:38:12 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	temp = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!temp)
		return (-1);
	while ((min + i) < max)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (i);
}

/*
#include <unistd.h>
int	main(void)
{
	int	**valor;
	int	i;
	int temp;
	int min = 1;
	int max = 7;

	valor = (int **) malloc(sizeof(int *) * (max - min));
	i = ft_ultimate_range(valor, min, max);
	temp = i + '0';
	write(1, &temp, 1);
	return (0);
}
*/