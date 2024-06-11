/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:12:22 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 18:14:41 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	counter;

	index = 0;
	counter = 1;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 65 && str[index] <= 90))
		{
			counter = 0;
		}
		index++;
	}
	return (counter);
}
