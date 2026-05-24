/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:11:23 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 12:46:13 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that prints the digits of the max of the integer
void	put_max_int(int nb)
{
	int	res;
	int	minus;

	minus = 43;
	if (nb < 0)
	{
		minus = 45;
		write(1, &minus, 1);
		nb++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		put_max_int(nb / 10);
	}
	res = nb % 10;
	if (minus == 45)
	{
		res++;
	}
	res = res + '0';
	write(1, &res, 1);
}

//Function that prints all the digits numbers
void	ft_putnbr(int nb)
{
	int	res;
	int	minus;

	minus = 45;
	if (nb == -2147483648)
	{
		put_max_int(nb);
		return ;
	}
	if (nb < 0)
	{
		write(1, &minus, 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	res = nb % 10;
	res = res + '0';
	write(1, &res, 1);
}

/*
//MAIN
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/