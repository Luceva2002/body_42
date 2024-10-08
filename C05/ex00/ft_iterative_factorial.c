/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:12:41 by luevange          #+#    #+#             */
/*   Updated: 2024/10/08 23:08:27 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return(0);
	if (nb <= 1)
		return(1);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*int main ()
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}*/
