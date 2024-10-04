/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:27:40 by luevange          #+#    #+#             */
/*   Updated: 2024/09/29 18:28:15 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int 	main()
{
	int a = 1;
	int b = 2;
	int *cicciA = &a;
	int *cicciO = &b;
	ft_swap(cicciA, cicciO);
	return (0);
}*/
