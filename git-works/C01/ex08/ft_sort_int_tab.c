/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:58:27 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 17:48:37 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//Function that prints the array sorted
void	print_sort(int *sorted, int size)
{
	int	i;
	int	num;

	i = 0;
	while (size)
	{
		num = sorted[i] + '0';
		i++;
		write(1, &num, 1);
		size--;
	}
}

//Function that organize an array
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	temp;

	i = 0;
	i2 = 0;
	while (i < size)
	{
		temp = tab[i];
		if (tab[i] < tab[i2])
		{
			tab[i] = tab[i2];
			tab[i2] = temp;
		}
		else
			i2++;
		if (i2 == size)
		{
			i++;
			i2 = 0;
		}
	}
}

/*
//MAIN
int	main(void)
{
	int	array_val[5] = {4, 5, 3, 1, 2};

	ft_sort_int_tab(array_val, 5);
	print_sort(array_val, 5);
	return (0);
}
*/