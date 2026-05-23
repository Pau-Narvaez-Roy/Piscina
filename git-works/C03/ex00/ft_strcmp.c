/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:15:30 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/10 16:51:37 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*
int	main(void)
{
	int	nbr;
	char s1_value[] = "";
	char s2_value[] = "";

	nbr = ft_strcmp(s1_value, s2_value);
	printf("Number: %d\n", nbr);
	return (0);
}
*/
