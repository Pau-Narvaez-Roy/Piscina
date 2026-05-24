/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:08:16 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/12 08:45:49 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
int	main(void)
{
	int	nbr;
	char s1_value[] = "ASD";
	char s2_value[] = "FSD";

	nbr = ft_strncmp(s1_value, s2_value, 0);
	printf("Number: %d\n", nbr);
	return (0);
}
*/
