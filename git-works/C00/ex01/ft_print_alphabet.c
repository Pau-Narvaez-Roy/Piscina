/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:22:21 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 09:05:26 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function who prints the alphabet based of the ascii value
void	ft_print_alphabet(void)
{
	char	increment;

	increment = 97;
	while (increment < 123)
	{
		write(1, &increment, 1);
		increment++;
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
