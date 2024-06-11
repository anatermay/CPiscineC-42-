/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:49:12 by aternero          #+#    #+#             */
/*   Updated: 2024/01/31 16:12:43 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	rest;
	int	coc;

	if (b != 0)
	{
		coc = a / b;
		rest = a % b;
		*div = coc;
		*mod = rest;
	}
}
