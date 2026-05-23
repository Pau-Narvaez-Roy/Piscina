/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 08:59:14 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/11 12:43:08 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//Function that transforms the first letter to mayus
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		if (str[0] <= 'z' && str[0] >= 'a')
			str[i] -= 32;
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z'))
			if ((str[i - 1] < '0' || str[i -1] > '9'))
				if (str[i] <= 'z' && str[i] >= 'a')
					str[i] -= 32;
		i++;
	}
	return (str);
}

/*
//MAIN
int	main(void)
{
	char	str[] = "salut, comMent tu vas ? 42mots quarante-deux;";
	printf("Var1 %s\n", ft_strcapitalize(str));
	return (0);
}
*/
