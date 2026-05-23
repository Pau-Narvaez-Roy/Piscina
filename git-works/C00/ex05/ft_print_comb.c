/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 08:46:38 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 08:19:58 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that prints ',' and ' '
void	print_space(char num1, char num2, char num3)
{
	if (num1 != '7' || num2 != '8' || num3 != '9')
		write(1, ", ", 2);
}

//Function that prints the three digits numbers without repeat
void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '9')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, num, 3);
				print_space(num[0], num[1], num[2]);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

/*
//MAIN
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/