/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:09:54 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/02 13:21:20 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int	main()
{
	int	a = 10;
	int	b = 5;
	int	c = 0;int	*mod = &a;
	int 	*div = &b;
	int	*mod = &a;
	ft_div_mod(a, b,mod,div);
	printf("%d", ft_div_mod(a, b,mod,div));
}
*/
