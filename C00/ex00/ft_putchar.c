/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:14:20 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 09:05:09 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that prints the caracter gived (by the main in this case)
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
//Main who execute the code
int main(void)
{
	ft_putchar('x');
	return (0);
}
*/
