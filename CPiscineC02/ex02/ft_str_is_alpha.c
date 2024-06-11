/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:35:59 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 17:48:25 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 65 && str[a] <= 90))
		{
			if (!(str[a] >= 97 && str[a] <= 122))
			{
				b = 0;
			}
		}
		a++;
	}
	return (b);
}