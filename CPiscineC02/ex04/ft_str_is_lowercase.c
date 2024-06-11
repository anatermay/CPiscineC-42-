/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:04:30 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 18:09:46 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	counter;

	index = 0;
	counter = 1;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 97 && str[index] <= 122))
		{
			counter = 0;
		}
		index++;
	}
	return (counter);
}
