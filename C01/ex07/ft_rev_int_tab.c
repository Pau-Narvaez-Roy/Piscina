/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:15:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 08:22:05 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints the int pointer reversed
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size - 1 > i)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}

/*
//MAIN
int	main(void)
{
	int	array_val[2] = {0,1};
	int	i;

	i = 0;
	ft_rev_int_tab(array_val, 2);
	while (i < 2)
	{
		printf("Value %d\n", array_val[i]);
		i++;
	}
	return (0);
}
*/