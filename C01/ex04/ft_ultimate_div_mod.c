/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:49:53 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/02 13:24:42 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	if (*b != 0)
	{
		div = 0;
		resto = 0;
		div = *a / *b;
		resto = *a % *b;
		*a = div;
		*b = resto;
	}
}

/*
int	main(void)
{
	int a;
	int b;

	b = 5;
	a = 20;

	int	*aa = &a;
	int	*bb = &b;

	ft_ultimate_div_mod(aa, bb);
	return(0);
}*/
