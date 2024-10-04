/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:24:43 by luevange          #+#    #+#             */
/*   Updated: 2024/09/22 22:50:19 by gzappate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char primo, char mezzo, char ultimo, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			write (1, &primo, 1);
		else if (i == x)
		{
			write (1, &ultimo, 1);
		}
		else
		{
			write (1, &mezzo, 1);
		}
		i++;
	}
}
