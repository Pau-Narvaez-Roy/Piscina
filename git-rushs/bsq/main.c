/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:15:56 by alcristo          #+#    #+#             */
/*   Updated: 2026/02/18 14:49:19 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	**tab;
	int		k;
	int		i;
	int		j;

	if (argc - 1 < 1)
		write(1, "\n", 1)
	else
	{
		k = 1;
		while (k < argc)
		{
			i = 0;
			j = 0;
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				write(1, "map error\n", 10);
				return (0);
			}
			while (read(fd, c, 1))
			{
				if (i == 1)
					j++;
				if (c[0] == '\n')
					i++;
			}
			close(fd);
			tab = make_table(i - 1, j - 1);
			if (valid_map(conds, tab) == 0)
			{
				k++;
				continue ;
			}
			print_tab(tab);
			look_square(tab);
			free(tab);
			k++;
		}
	}
	return (0);
}
