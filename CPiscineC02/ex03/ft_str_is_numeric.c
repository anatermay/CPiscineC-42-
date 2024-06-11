/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:06 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 18:10:51 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	counter;

	index = 0;
	counter = 1;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 48 && str[index] <= 57))
		{
			counter = 0;
		}
		index++;
	}
	return (counter);
}
