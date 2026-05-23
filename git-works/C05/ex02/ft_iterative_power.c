/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:00:41 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 11:12:47 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
//MAIN
int	main(void)
{
	#include <stdio.h>
	printf("%d", ft_iterative_power(3, 3));
}
*/
