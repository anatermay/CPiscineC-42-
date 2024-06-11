/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:18:45 by aternero          #+#    #+#             */
/*   Updated: 2024/02/02 14:44:05 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = size - 1;
	while (i < x)
	{
		y = tab[i];
		tab[i] = tab[x];
		tab[x] = y;
		i++;
		x--;
	}
}
