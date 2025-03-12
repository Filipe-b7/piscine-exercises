/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:07:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/09 16:48:30 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (nb == i * i)
		return (i);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(16));
}*/		
