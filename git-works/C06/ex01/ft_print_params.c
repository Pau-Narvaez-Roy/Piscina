/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:12:43 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 18:28:31 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		write(1, &argv[j][i++], 1);
		if (argv[j][i] == '\0')
		{
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
	return (0);
}
