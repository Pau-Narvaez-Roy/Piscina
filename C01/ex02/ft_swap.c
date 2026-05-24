/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:10:05 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/02 10:12:09 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that swaps the value of two pointers
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
//MAIN
int	main(void)
{
	int	a_var;
	int	b_var;

	a_var = 1;
	b_var = 2;
	ft_swap(&a_var, &b_var);
	return (0);
}
*/
