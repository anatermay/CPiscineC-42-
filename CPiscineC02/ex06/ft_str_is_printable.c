/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:16:11 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 18:18:46 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;
	int	counter;

	index = 0;
	counter = 1;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 126))
		{
			counter = 0;
		}
		index++;
	}
	return (counter);
}
