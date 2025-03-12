/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:07:59 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/01 19:40:23 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab( int *tab, int size)
{
	int	i;
	int	temp_int;

	i = 0;
	temp_int = 0;
	while (i < size / 2)
	{
		temp_int = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp_int;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1,5,4,3,2};
	int	i = 0;
	
	ft_rev_int_tab(tab, 5);
	while(i < 5)
	{
	printf("%d",tab[i]);
	i++;
	}
}*/	
