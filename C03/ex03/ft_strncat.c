/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:30:55 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/06 14:10:15 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest])
	{
		size_dest++;
	}
	while (i < nb && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "bc";
	char	src[] = "olasasjajsjas";
	unsigned int	nb = 5;
	
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
