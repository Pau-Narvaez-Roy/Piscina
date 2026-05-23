/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:08:37 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/18 16:12:06 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include <stdio.h>

void	print_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	change_square(char **tab, int *square, char full)
{
	int	i;
	int	j;

	i = square[1];
	while (i < square[3])
	{
		j = square[2];
		while (j < square[4])
		{
			tab[i][j] = full;
			j++;
		}
		i++;
	}
	print_tab(tab);
}

void	look_square(char **tab)
{
	int	i[2];
	int	j[2];
	int	square[5];
	int	size;
	int	found;

	i[0] = 0;
	square[0] = 0;
	while (tab[i[0]])
	{
		j[0] = 0;
		while (tab[i[0]][j[0]])
		{
			i[1] = i[0];
			size = 1;
			found = 0;
			while ((i[1] - i[0]) < size)
			{
				j[1] = j[0];
				while ((j[1] - j[0]) < size)
				{
					if (tab[i[1]][j[1]] != '.')
						found = 1;
					j[1]++;
				}
				i[1]++;
				if (((i[1] - i[0]) == (j[1] - j[0])) && !found)
				{
					if (square[0] < size)
					{
						square[0] = size;
						square[1] = i[0];
						square[2] = j[0];
						square[3] = i[1];
						square[4] = j[1];
					}
					size++;
					i[1] = i[0];
				}
			}
			j[0]++;
		}
		i[0]++;
	}
	change_square(tab, square, 'X');
}

char	**make_table(int max_row, int max_column)
{
	char	c[1];
	char	**tab;
	int		fd;
	int		i;
	int		j;

	i = 0;
	tab = (char **) malloc(sizeof(char *) * (max_row + 1));
	if (!tab)
		return (NULL);
	while (i <= max_row)
	{
		tab[i] = (char *) malloc(sizeof(char) * (max_column + 1));
		if (!tab[i])
			return (NULL);
		i++;
	}
	i = 0;
	fd = open("map.txt", O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	while (c[0] != '\n')
		read(fd, c, 1);
	while (i < max_row)
	{
		j = 0;
		while (j < max_column)
		{
			read(fd, c, 1);
			if (c[0] != '\n')
			{
				tab[i][j] = c[0];
				j++;
			}
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = "\0";
	close(fd);
	return (tab);
}

char	*return_params(int num_params)
{
	char	*params;
	char	c[1];
	int		fd;
	int		i;

	i = 0;
	params = (char *) malloc(sizeof(char) * num_params);
	if (!params)
		return (NULL);
	fd = open("map.txt", O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	while (i < num_params - 1)
	{
		read(fd, c, 1);
		params[i++] = c[0];
	}
	params[i] = '\0';
	close(fd);
	return (params);
}

int	main(void)
{
	char	**tab;
	char	*params;
	char	c[1];
	int		fd;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	fd = open("map.txt", O_RDONLY);
	if (fd < 0)
	{
		write(1, "error\n", 6);
		close(fd);
		return (0);
	}
	while (read(fd, c, 1))
	{
		if (i == 1)
			j++;
		if (i == 0)
			k++;
		if (c[0] == '\n')
			i++;
	}
	close(fd);
	tab = make_table(i - 1, j - 1);
	params = return_params(k);
	print_tab(tab);
	look_square(tab);
	while (i >= 0)
		free(tab[i--]);
	free(params);
	free(tab);
	return (0);
}
