/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:22:21 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 09:05:47 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that prints the alphabet backwards based on the value ascii
void	ft_print_reverse_alphabet(void)
{
	char	decrease;

	decrease = 122;
	while (decrease > 96)
	{
		write(1, &decrease, 1);
		decrease--;
	}
}

/*
//Main who execute the code
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
