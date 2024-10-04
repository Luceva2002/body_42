/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:54:59 by luevange          #+#    #+#             */
/*   Updated: 2024/09/23 14:56:57 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	if (a >= 0)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}

/*int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-1);
	return (0);
}*/
