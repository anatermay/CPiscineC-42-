/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aternero <aternero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:22:10 by aternero          #+#    #+#             */
/*   Updated: 2024/02/08 16:35:12 by aternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (src[x] == '\0')
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
