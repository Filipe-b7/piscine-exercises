/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:20:22 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/06 14:06:14 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	size_src;
	int	count;

	size_dest = 0;
	size_src = 0;
	count = 0;
	while (dest[size_dest++])
		;
	while (src[size_src++])
		;
	while (count < size_src)
	{
		dest[count + size_dest -1] = src[count];
		count++;
	}
	dest[count + size_dest - 1] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Ola";
	char	dest[] = "mora";
	
	printf("%s",ft_strcat(src,dest));
	return(0);
}*/
