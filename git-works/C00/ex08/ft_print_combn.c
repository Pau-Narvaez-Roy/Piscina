/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 08:32:02 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 08:32:24 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that manage the parts to print
void	select_print(int *num, int num_max)
{
	int		temp;
	int		look_max;

	look_max = num_max;
	while (num_max - 1 >= 0)
	{
		temp = *num + '0';
		write(1, &temp, 1);
		num++;
		num_max--;
	}
	if (num[0] == 8 && num[1] == 9)
		return ;
	else
		write(1, ", ", 2);
}

//Function that change the number between the pos 0 and the last of the array
void	change_between(int *array, int n)
{
	int	i;

	i = n - 1;
	while (array[i] < 10)
	{
		write(1, array[i], 1);
		array[i]++;
	}
	array[i - 1]++;
	array[i] = array[i - 1] + 1;
}

//Function that prints all the combinations of n digits
void	ft_print_combn(int n)
{
	int	array[9];
	int	i;

	if (n < 0 || n > 10)
		return ;
	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	i = n - 1;
	while (array[0] <= 10 - n || array[n - 1] < 10)
	{
		change_between(array, n);
	}
}

//MAIN
int	main(void)
{
	ft_print_combn(1);
	return (0);
}
