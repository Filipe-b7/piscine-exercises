/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:36:48 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/12 18:47:06 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	return (0);
	}
}
