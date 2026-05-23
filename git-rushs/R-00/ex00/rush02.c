/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:33:53 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/01 17:17:08 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

//Function that prints each line
void	print_row(int x, int y, int x_max, int y_max)
{
	char	letter;

	if (x == 1 && y == 1)
		letter = 'A';
	else if (x == 1 && y == y_max)
		letter = 'C';
	else if (x == x_max && y == 1)
		letter = 'A';
	else if (y == y_max && x == x_max)
		letter = 'C';
	else if (x == 1 || x == x_max)
		letter = 'B';
	else if (y == 1 || y == y_max)
		letter = 'B';
	else
		letter = ' ';
	ft_putchar(letter);
}

//Function that prints a squarre based on the x and y give
void	rush(int x, int y)
{
	int	x_count;
	int	y_count;

	x_count = 1;
	y_count = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_count <= y)
	{
		x_count = 1;
		while (x_count <= x)
		{
			print_row(x_count, y_count, x, y);
			x_count++;
		}
		ft_putchar('\n');
		y_count++;
	}
}
