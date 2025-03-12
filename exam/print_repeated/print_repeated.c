/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_repeated.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:54:56 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/12 12:57:01 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_x(char c);

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	
	while (argv[1][i])
	{
		print_x(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

void	print_x(char c)
{
	int	x;
	
	x = 0;
	if (c >= 'a' && c <= 'z')
	{
		x = c - 'a' + 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		x = c - 'A' + 1;
	}
	else 
	{
		write(1, &c, 1);
	}
	while (x > 0)
	{
		write(1, &c, 1);
		x--;
	}
}
