/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:54:04 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/12 22:54:27 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i =0;
	
	while (str[i])
	{
		i++;
	}
	return (i);
}
void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	wdlen;
	
	i = 0;
	j = 0;
	wdlen = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					wdlen++;
					break;
				}
				j++;
			}
			i++;
		}
		if (wdlen == ft_strlen(argv[1]))
			put_str(argv[1]);	
	}
	write(1, "\n", 1);
	return (0);
}
