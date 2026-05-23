/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 08:00:31 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/03 09:06:50 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function who says if a number is positive or negative
void	ft_is_negative(int n)
{
	int	num_ascii;

	if (n < 0)
		num_ascii = 78;
	else
	{
		num_ascii = 80;
	}
	write(1, &num_ascii, 1);
}

/*
//Main who execute the code
int main(void)
{
	int num;

	num = -1;
	ft_is_negative(num);
	return (0);
}
*/
