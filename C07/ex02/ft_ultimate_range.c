/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:17:49 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/10 17:41:25 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
	{
		p = 0;
		return (0);
	}
	p = (int *) malloc (sizeof(int) * (max - min));
	if (!p)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (max - min);
}

/*#include <stdio.h>
int	main(void)
{	
	int	*range[1];
	printf("%d",ft_ultimate_range(range, -2, 7));
}*/
