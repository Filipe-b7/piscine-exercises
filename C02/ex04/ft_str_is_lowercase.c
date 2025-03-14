/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:41:35 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/03 22:42:04 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0' && j == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (j);
}
