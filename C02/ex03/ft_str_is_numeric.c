/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:27:12 by luevange          #+#    #+#             */
/*   Updated: 2024/10/02 23:06:47 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '1' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
 {
         printf("%d", ft_str_is_numeric("111adadsf11"));
 
 }*/
