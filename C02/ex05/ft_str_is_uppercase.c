/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:20:08 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 18:20:10 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints 1 if the char is uppercase and 0 if not
int	ft_str_is_uppercase(char *str)
{
	int	nbr;

	nbr = 1;
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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

	nbr = ft_str_is_uppercase("AsD");
	printf("Number: %d\n", nbr);
	return (0);
}
*/