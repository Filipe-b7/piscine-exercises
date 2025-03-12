/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:54:10 by frocha-b          #+#    #+#             */
/*   Updated: 2025/02/27 14:35:17 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int aaa;
	int bbb;

	aaa = 0;
	bbb = 0;
	
	int	*aa = &aaa;
	int	*bb = &bbb;

	*aa = 5;
	*bb = 4;	

	printf("o valor de a antes é:%d\n o valor de b antes é:%d",*aa,*bb);
       ft_swap(aa,bb);
	printf("\no valor de a :depois é%d\n o valor de b deis é:%d",*aa,*bb);       
}*/
