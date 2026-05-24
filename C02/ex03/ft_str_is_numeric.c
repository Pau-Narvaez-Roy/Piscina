/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:36:14 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 16:36:16 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints 1 if the string have only 1 to 9 char and 0 if not
int	ft_str_is_numeric(char *str)
{
	int	nbr;

	nbr = 1;
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
			nbr = 0;
		str++;
	}
	return (nbr);
}

/*
//MAIN
int	main(void)
{
	int	nbr;

	nbr = ft_str_is_numeric("1");
	printf("Number: %d\n", nbr);
	return (0);
}
*/
