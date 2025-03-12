/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:02:41 by frocha-b          #+#    #+#             */
/*   Updated: 2025/03/03 22:27:05 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	string_to_minusc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (*str);
}

int	is_capital(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_lwrcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_num(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	string_to_minusc(str);
	while (str [i] != '\0')
	{
		j = i -1;
		if (is_lwrcase(str, 0) == 1)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else if (is_num(str, j) == 0)
		{
			if (is_lwrcase(str, j) == 0 && is_capital(str, j) == 0)
			{
				if (is_lwrcase(str, i) == 1)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
