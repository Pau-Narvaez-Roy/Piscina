/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:38:53 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/02/18 12:31:19 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	add_sep(char *str, char *sep, int pos)
{
	int	l;

	l = 0;
	while (sep[l])
	{
		str[pos] = sep[l];
		pos++;
		l++;
	}
	return (pos);
}

int	return_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*return_str(int size, char *str, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (strs[i] && i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		if (strs[i + 1] && i + 1 < size)
			k = add_sep(str, sep, k);
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		l;
	int		i;

	i = 0;
	if (!size)
		return (malloc(0));
	l = return_size(sep) * (size - 1);
	while (strs[i] && i < size)
	{
		l += return_size(strs[i]);
		i++;
	}
	str = malloc(sizeof(char) * (l + 1));
	str = return_str(size, str, strs, sep);
	return (str);
}

/*
int	main(int argc, char **argv)
{
	#include <unistd.h>
	#include <stdio.h>

	char	*str;
	char	*sep = " | ";
	int		size = argc;
	int		i = 0;

	argc = 0;
	i = 0;
	str = ft_strjoin(size, argv, sep);
	printf("valor: %s\n", str);
	while (str[i])
		write(1, &str[i++], 1);
	free(str);
	return (0);
}
*/
