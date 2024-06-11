/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:58:46 by aternero          #+#    #+#             */
/*   Updated: 2024/01/30 14:13:35 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = a / 10 + '0';
	n2 = a % 10 + '0';
	n3 = b / 10 + '0';
	n4 = b % 10 + '0';
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
