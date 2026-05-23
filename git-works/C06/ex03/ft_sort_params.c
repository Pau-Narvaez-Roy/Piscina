/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:41:08 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 18:28:00 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			j = 0;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		while (*argv[j])
			write(1, argv[j]++, 1);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
