/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:10:43 by luevange          #+#    #+#             */
/*   Updated: 2024/09/29 19:26:22 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define rows 4
#define columns 4

void matrice (int matrix[rows][columns])
{
	for (int i = 0; i < rows ; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			char	buffer[10];
			snprintf(buffer, sizeof(buffer), "%d", matrix[i][j]);
			write (1, buffer, strlen(buffer));
		}
		write(1, "\n", 1);
	}
}

int	main()
{
	int	matrix[rows][columns] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	matrice(matrix);
	return(0);
}

