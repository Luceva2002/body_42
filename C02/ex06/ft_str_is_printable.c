/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:55:54 by luevange          #+#    #+#             */
/*   Updated: 2024/10/04 21:20:33 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str > '~' || *str < ' ')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
 {
         printf("%d", ft_str_is_printable(""));
 
 }
*/
