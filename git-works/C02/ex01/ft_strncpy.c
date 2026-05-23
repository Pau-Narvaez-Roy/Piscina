/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:07:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/09 12:54:38 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that copy "man strncpy"
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*src)
			dest[i] = *src;
		else
			dest[i] = '\0';
		if (*src)
			src++;
		i++;
	}
	return (dest);
}

/*
//MAIN
int	main(void)
{
	char	*copy;
	char	dest[5] = "";

	copy = ft_strncpy(dest, "COPY", 10);
	while (*copy)
	{
		write(1, copy++, 1);
	}
	return (0);
}
*/