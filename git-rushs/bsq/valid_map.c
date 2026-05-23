/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:17:07 by alcristo          #+#    #+#             */
/*   Updated: 2026/02/18 13:07:57 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_map(char *conds, char **table)
{
	int	n;
	int	l;
	int	i;
	int	j;
	int	found_empty;

	found_empty = 0;
	while (conds[0] && conds[2] && conds[2] != '\n')
	{
		if (conds[0] >= '0' && conds[0] <= '9')
		{
			conds++;
			continue ;
		}
		else if (conds[0] < ' ' && conds[1] < ' ' && conds[2] < ' ')
			return (0);
		else if (conds[0] == conds[1] || conds[2] == conds[0] ||
				conds[1] == conds[2])
			return (0);
	}
	i = 0;
	l = 0;
	while (table[i])
	{
		n = 0;
		j = 0;
		while (table[i][j] && table[i][j] != '\n')
		{
			if (table[i][j] != conds[0] || table[i][j] != conds[1])
				return (0);
			if (table[i][j] == conds[0])
				found_empty = 1;
			if (i == 0)
				l++;
			else
				n++;
			j++;
		}
		if (table[i][j] != '\n')
			return (0);
		if (i != 0 && n != l)
			return (0);
		i++;
	}
	if (found_empty == 0)
		return (0);
	return (1);
}
