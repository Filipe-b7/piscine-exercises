/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:51:08 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/12 20:23:37 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	check_doubles_str1(char* str1, char c)
{

	int	i;

	i = 0;
		
	while(str1[i])
	{
		if (str1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles(char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
			return (0);
		i++;
	}
	return (1);
}
	
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check_doubles(argv[1], i))
			{
				write(1, &argv[1][i],1);
			}
			i++;
		}
		while (argv[2] [j])
		{
			if (check_doubles(argv[2], j) && check_doubles_str1(argv[1],argv[2][j]))
			{
				write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}	
