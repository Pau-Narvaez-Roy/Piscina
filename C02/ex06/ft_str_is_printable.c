/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:24:05 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 18:24:07 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints 1 if the char is printable and 0 if not
int	ft_str_is_printable(char *str)
{
	int	nbr;

	nbr = 1;
	while (*str)
	{
		if (*str < 32 || *str > 126)
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

	nbr = ft_str_is_printable("HELO_AA A");
	printf("Number: %d\n", nbr);
	return (0);
}
*/