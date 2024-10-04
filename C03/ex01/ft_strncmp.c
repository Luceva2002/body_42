/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:52:48 by luevange          #+#    #+#             */
/*   Updated: 2024/10/04 12:21:44 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d", ft_strncmp(av[1], av[2], 7));
	}
	return (0);	
}*/

