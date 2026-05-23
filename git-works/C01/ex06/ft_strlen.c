/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:43:44 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/02 13:10:07 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that prints the pointer length
int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (*str)
	{
		str++;
		str_len++;
	}
	return (str_len);
}

/*
//MAIN
int	main(void)
{
	char	str[] = "Hola";

	ft_strlen(str);
	return (0);
}
*/
