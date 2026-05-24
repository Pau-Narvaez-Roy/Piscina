/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:02:38 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 10:08:07 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = i + 1;
	check = 0;
	while (base[i])
	{
		if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
			check = 1;
		else
			j++;
		if (base[j])
		{
			i++;
			j = i + 1;
		}
	}
	if (i < 2)
		check = 1;
	return (check);
}

void	ft_putnbr(unsigned int nb, char *base, unsigned int size)
{
	if (nb >= size)
		ft_putnbr(nb / size, base, size);
	write(1, &base[nb % size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	check;

	i = 0;
	while (base[i])
		i++;
	check = check_base(base);
	if (check != 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr = -nbr, base, i);
		return ;
	}
	ft_putnbr(nbr, base, i);
}

/*
//MAIN
#include <stdio.h>

int	main(void)
{
	char	array[] = "0123456789";

	ft_putnbr_base(1233333333, array);
	return (0);
}
*/