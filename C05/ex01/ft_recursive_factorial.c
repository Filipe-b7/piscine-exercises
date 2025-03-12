/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:09:39 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/09 17:52:07 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(2));
	return (0);
}
