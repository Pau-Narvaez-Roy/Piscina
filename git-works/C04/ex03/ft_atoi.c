/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:42:45 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/19 09:04:09 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that copy the work of an "atoi"
int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
//MAIN
int	main(void)
{
	char	array[] = " -12a1";

	printf("valor: %d\n", ft_atoi(array));
	printf("valor: %d\n", atoi(array));
}
*/
