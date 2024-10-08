/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:10:12 by luevange          #+#    #+#             */
/*   Updated: 2024/10/08 23:22:43 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb <= 1)
		return(1);
	return (nb * ft_recursive_factorial(nb -1));
}

int main ()
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}

