/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:54:50 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/11 10:09:33 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*str_cat(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_strs(char **strs, char size)
{
	int	counter;
	int	j;

	j = 0;
	counter = 0;
	while (j < size)
	{
		counter += str_len(strs[j]);
		j++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		entire_size;
	char	*strstr;

	i = 0;
	entire_size = 0;
	if (size <= 0)
	{
		strstr = (char *) malloc (1);
		strstr[0] = '\0';
		return (strstr);
	}
	entire_size = size_strs(strs, size) + (str_len(sep) * (size -1));
	strstr = (char *) malloc ((sizeof(char) * entire_size + 1));
	if (!strstr)
		return (0);
	while (i < size)
	{
		(void) str_cat(strs[i], strstr);
		if (i != size - 1)
			(void) str_cat(sep, strstr);
		i++;
	}
	strstr[entire_size] = '\0';
	return (strstr);
}
/*
#include <stdio.h>

int	main(void)
{	
	char	*strs[] = {"joao", "gosta", "de", "jogar", "teste","joao", "joao",
		 "futneol","joao"};
	char	*sep = "?|*?";
	printf("%s", ft_strjoin(9, strs, sep));
	return (0);
}*/
