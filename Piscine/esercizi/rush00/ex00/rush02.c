/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:10:20 by luevange          #+#    #+#             */
/*   Updated: 2024/09/22 23:15:21 by gzappate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char primo, char mezzo, char ultimo, int x);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_putchar('A', 'B', 'A', x);
		}
		else if (i >= y)
		{
			ft_putchar('C', 'B', 'C', x);
		}
		else
		{
			ft_putchar('B', ' ', 'B', x);
		}
		i++;
		write (1, "\n", 1);
	}
}
