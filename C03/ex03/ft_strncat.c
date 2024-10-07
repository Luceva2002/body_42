/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:42:33 by luevange          #+#    #+#             */
/*   Updated: 2024/10/07 13:37:47 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*third;

	i = 0;
	third = dest;
	while (*dest)
		dest++;
	while (src[i] && i < nb)
		*(dest++) = src[i++];
	*dest = '\0';
	return (third);
}

/*int	main(int ac, char **av)
{
	printf("%s", ft_strncat(av[1], av[2], 10));
	return (0);
}*/
