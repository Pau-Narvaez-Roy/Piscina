/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsalime <tsalime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:49:45 by tsalime           #+#    #+#             */
/*   Updated: 2026/02/07 18:24:54 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print(char bd_center[4][4])
{
	int	pos[2];

	pos[0] = 0;
	pos[1] = 0;
	while (pos[0] < 4)
	{
		write(1, &bd_center[pos[0]][pos[1]], 1);
		pos[1]++;
		if (pos[1] > 3)
		{
			pos[1] = 0;
			pos[0]++;
			write(1, "\n", 1);
		}
	}
}

int	ft_column(char board_char, int place)
{
	if (board_char == '4')
		place = 1;
	else if (board_char == '3')
		place = 2;
	else if (board_char == '2')
		place = 3;
	else if (board_char == '1')
		place = 4;
	return (place);
}

void	ft_sort(char board[4][4])
{
	int	start;
	int	place;

	char bd_center[4][4];
	int pos[4];
	pos[0] = 0;
	pos[1] = 0;
	place = 1;
	while (board[pos[0]][pos[1]])
	{
		pos[2] = 0;
		pos[3] = 0;
		start = 0;
		place = ft_column(board[pos[0]][pos[1]], place);
		while (start < 4)
		{
			if (pos[0] == 3)
			{
				if (start == 0)
					pos[3] = 3;
				pos[2] = pos[1];
				pos[3]--;
			}
			else if (pos[0] == 2)
			{
				if (start == 0)
					pos[3] = 0;
				pos[2] = pos[1];
				pos[3]++;
			}
			else if (pos[0] == 1)
			{
				if (start == 0)
					pos[2] = 3;
				pos[3] = pos[1];
				pos[2]--;
			}
			else if (pos[0] == 0)
			{
				if (start == 0)
					pos[2] = 0;
				pos[3] = pos[1];
				pos[2]++;
			}
			bd_center[pos[2]][pos[3]] = place + '0';
			place++;
			if (place > 4)
				place = 1;
			start++;
		}
		pos[3]++;
		pos[1]++;
		if (pos[1] > 3)
		{
			pos[1] = 0;
			pos[0]++;
		}
	}
	ft_print(bd_center);
}

int	main(int arg, char **args)
{
	char	board[4][4];
	int		i;
	int		pos[2];

	arg--;
	i = 0;
	pos[0] = 0;
	pos[1] = 0;
	while (args[arg][i])
	{
		if (args[arg][i] >= '1' && args[arg][i] <= '4')
		{
			board[pos[0]][pos[1]] = args[arg][i];
			pos[1]++;
		}
		if (pos[1] > 3)
		{
			pos[1] = 0;
			pos[0]++;
		}
		i++;
	}
	ft_sort(board);
	return (0);
}
