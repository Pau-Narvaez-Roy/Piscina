/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:19:40 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/02 10:37:13 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
//MAIN
int	main(void)
{
	int	a_value;
	int	b_value;

	a_value = 30;
	b_value = 10;
	ft_ultimate_div_mod(&a_value, &b_value);
	printf("a: %d\n", a_value);
	printf("b: %d", b_value);
	return (0);
}
*/
