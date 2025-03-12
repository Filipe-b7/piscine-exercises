/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:57:14 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/09 16:47:50 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		r = r * nb ;
		nb--;
	}
	return (r);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(-2));
}*/
