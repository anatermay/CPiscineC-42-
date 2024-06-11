/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:07:41 by aternero          #+#    #+#             */
/*   Updated: 2024/01/31 17:52:22 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numb(int nb)
{
	char	c;
	int		rest;

	rest = nb % 10;
	if (nb < 10)
	{
		c = rest + '0';
		write(1, &c, 1);
	}
	else
	{
		c = rest + '0';
		nb = nb / 10;
		print_numb(nb);
		write(1, &c, 1);
	}
}

void	negative_numb(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		nb = nb * -1;
		write(1, "-", 1);
		print_numb(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		negative_numb(nb);
	}
	else
	{
		print_numb(nb);
	}
}
