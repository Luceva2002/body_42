/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:55:47 by luevange          #+#    #+#             */
/*   Updated: 2024/10/04 21:24:23 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*s;

	s = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
/*
int	main()
{
	char src[] = "pippo";
	char dest[] = "ciccio";

	printf ("ciccio e divntato %s", ft_strcpy(dest, src));
	return (0);
}*/
