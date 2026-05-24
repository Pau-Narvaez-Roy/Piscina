/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:10:18 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 10:46:41 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that print the XX part (execute 2 times)
void	print_part(int num)
{
	int	num2;

	num2 = 0;
	while (num > 9)
	{
		num = num - 10;
		num2 = num2 + 1;
	}
	num2 = num2 + '0';
	num = num + '0';
	write(1, &num2, 1);
	write(1, &num, 1);
}

//Function that manage the parts that need to be printed
void	select_print(int num1, int num2)
{
	print_part(num1);
	write(1, " ", 1);
	print_part(num2);
	if (num1 != 98 || num2 != 99)
	{
		write(1, ", ", 2);
	}
}

//Function that prints all "XX XX" combination
void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] <= 99)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			select_print(num[0], num[1]);
			num[1]++;
		}
		num[0]++;
	}
}

/*
//MAIN
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/