/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:43:03 by aternero          #+#    #+#             */
/*   Updated: 2024/02/13 14:54:14 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_conditions(char *str, int x)
{
	while (str[x] != '\0' && str[x] >= 'a' && str[x] <= 'z')
	{
		if (!((str[x - 1] >= 48 && str[x - 1] <= 57)
				|| (str[x - 1] >= 65 && str[x - 1] <= 90)
				|| (str[x - 1] >= 97 && str[x - 1] <= 122)))
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x > 0 && str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	x = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[x] != '\0')
	{
		ft_conditions(str, x);
		x++;
	}
	return (str);
}
