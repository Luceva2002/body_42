/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:09:29 by luevange          #+#    #+#             */
/*   Updated: 2024/10/04 12:16:57 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
		j++;
	total = i + j;
	j = 0;
	while (i <= total)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return(dest);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s", ft_strcat(av[1], av[2]));
	}
	return (0);
}*/
