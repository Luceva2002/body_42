/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:45:50 by luevange          #+#    #+#             */
/*   Updated: 2024/10/09 18:24:27 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/*int main ()
{
	printf("%d", ft_recursive_power(5, 3));
        return (0);
}*/
