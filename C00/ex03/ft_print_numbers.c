/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:14:43 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 09:06:04 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function who prints the numbers
void	ft_print_numbers(void)
{
	int	increment;
	int	ascii;

	increment = 0;
	while (increment < 10)
	{
		ascii = increment + '0';
		write(1, &ascii, 1);
		increment++;
	}
}

/*
//Main who execute the code
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
