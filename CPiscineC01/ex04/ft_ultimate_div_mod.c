/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:15:05 by aternero          #+#    #+#             */
/*   Updated: 2024/01/31 16:23:42 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;
	int	coc;
	int	rest;

	x = *a;
	y = *b;
	if (x != 0)
	{
		coc = x / y;
		rest = x % y;
		*a = coc;
		*b = rest;
	}
}
