/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:52:59 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/02 16:08:18 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_position(int *tab, int i, int min);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;	

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				min = j ;
			}
			j++;
		}
		swap_position(tab, i, min);
		i++;
	}
}

void	swap_position(int *tab, int i, int min)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[min];
	tab[min] = temp;
}
/*#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	tab[] = {5,2,3,4,1};
	ft_sort_int_tab(tab, 5);


	while(i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
}*/
