/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:17:11 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 18:17:13 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints 1 if the char is lowercase and 0 if not
int	ft_str_is_lowercase(char *str)
{
	int	nbr;

	nbr = 1;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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

	nbr = ft_str_is_lowercase("aSd");
	printf("Number: %d\n", nbr);
	return (0);
}
*/