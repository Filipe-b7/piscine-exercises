/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:00:13 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/12 21:26:46 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;
	
	i = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
 	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1 ] = temp;
		i++;
	}
	return (str);
}
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char  str[] = "12345 6789";
	
	ft_strrev(str);
	while(str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	return (0);
}
	
