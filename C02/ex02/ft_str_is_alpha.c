/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:19:20 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/09 11:30:10 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Function that prints 1 if the string have only a to z letters 
//and 0 if not (1 if empty)
int	ft_str_is_alpha(char *str)
{
	int	nbr;

	nbr = 1;
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
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

	nbr = ft_str_is_alpha(" ");
	printf("Number: %d\n", nbr);
	return (0);
}
*/