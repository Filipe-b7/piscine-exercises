/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:54:52 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/10 17:31:21 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	matrix = (int *) malloc (sizeof (int) * (max - min));
	if (!matrix)
	{
		return (NULL);
	}
	while (min < max)
	{
		matrix[i] = min;
		min++;
		i++;
	}
	return (matrix);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min = -5;
	int	max = 9;
	int*	matrix = ft_range(min, max);
	int	i;

	i = 0;
	while (i < max - min)
	{
		printf("%d",matrix[i]);
		i++;
	}
	return (0);
}*/
