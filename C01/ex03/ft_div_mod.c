/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div__mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:51:48 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/02 10:32:44 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that save the division and the module of a and b
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
//MAIN
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 6;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div: %d\n", *div);
	printf("mod: %d", *mod);
	return (0);
}
*/
