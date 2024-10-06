/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcp_alphabeth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:19:38 by luevange          #+#    #+#             */
/*   Updated: 2024/10/06 16:38:02 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	strcp_alphabeth(char *src, char *dest)
{
	int i;
	int n;
	
	i = 0;
	n = 0;
	while (src[i] != '\n')
	{
		if ((src[i] >= 'a' && src[i] <= 'z') || (src[i] >= 'A' && src[i] <= 'Z'))
		{		
			dest[n] = src[i];
			n++;
		}
		i++;
	}
	dest[i] = '\0';
}
