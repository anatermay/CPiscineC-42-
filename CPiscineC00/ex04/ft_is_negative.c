/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:54:47 by aternero          #+#    #+#             */
/*   Updated: 2024/01/26 21:48:48 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	while (n < 0)
	{
		write(1, &"N", 1);
		break ;
	}
	while (n >= 0)
	{
		write(1, &"P", 1);
		break ;
	}
}
