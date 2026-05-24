/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:10:33 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/04 13:10:38 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//Function that copy "man strcpy"
char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

/*
//MAIN
int	main(void)
{
	char	*copy;
	char	dest[10];

	copy = ft_strcpy(dest, "HOLA");
	while (*copy)
	{
		write(1, copy++, 1);
	}
	return (0);
}
*/