/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:25:31 by luevange          #+#    #+#             */
/*   Updated: 2024/10/09 18:30:51 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	while (index > 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (1);
}

/*int main ()
{
	printf("%d", ft_fibonacci(-3));
        return (0);
}*/
