/* ************************************************************************** */
/*                                                                          */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:52:21 by frocha-b          #+#    #+#             */
/*   Updated: 2025/02/27 15:00:34 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	a = (n / 10) % 10 + '0';
	b = (n % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_numbers(x);
			write(1, " ", 1);
			ft_print_numbers(y);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
