/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:17:51 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/11 09:06:37 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;

	destl = 0;
	srcl = 0;
	while (dest[destl])
		destl++;
	if (size <= destl)
		return (size);
	while (srcl <= size - destl - 1 && *src)
	{
		dest[destl + srcl] = *src++;
		srcl++;
	}
	dest[destl + srcl] = '\0';
	return (destl + srcl);
}

/*
#include <stdio.h>
//MAIN
int	main(void)
{
	char	str[] = "efgh";
	char	dest[8] = "Abcd";

	printf("Var1 %u\n", ft_strlcat(dest, str, 2));
	printf("%s", dest);
	return (0);
}
*/