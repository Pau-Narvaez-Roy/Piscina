/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:38:30 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/02 11:53:25 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that prints the values of the pointer str
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
//MAIN
int	main(void)
{
	char	str_value[] = "Hola mi amigo";
	
	ft_putstr(str_value);
	return (0);
}
*/
