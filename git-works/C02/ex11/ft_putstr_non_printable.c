/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:07:03 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/09 15:07:27 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that show a char secuence on screen and the no printables on hexa
void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &hexa[str[i] / 16], 1);
			write(1, &hexa[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*
//MAIN
int	main(void)
{
	char	array[] = "\x1F";

	ft_putstr_non_printable(array);
	return (0);
}
*/