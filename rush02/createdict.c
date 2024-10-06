/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createdict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:06:18 by ldei-sva          #+#    #+#             */
/*   Updated: 2024/10/06 16:40:19 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void	strcp_num(char *src, char *dest);

void	strcp_alphabeth(char *src, char *dest);

char 	*readict(char *dict)
{
	int		fd;
	int		size;
	int		n;
	char	*strdict;
	char	error[88] = "";

	fd = open(dict , O_RDONLY);
	if (fd == -1)
		return NULL;
	else
	{
		strdict = (char *) malloc (1000 * (sizeof(char)));
		size = read (fd, strdict, 1000);
		n = close(fd);
	}
	return (strdict);
}

char **createdict(char *dict)
{
	char	*strdict;
	char	num[] = "";
	char	word[8] = "";

	int		lenght;
	char	**matrix;

	strdict = readict(dict);
	if (strdict != NULL)
	{
		matrix = (char **) malloc (1000 * (sizeof (char *)));
		strcp_num(strdict, num);
		strcp_alphabeth(strdict, word);
		//lenght = ft_strlen(num);
		//strdict += lenght;
		/*num = malloc (lenght * (sizeof (char)));
		matrix[i] = num;
		strdict += lenght;*/
	}
}


int main()
{
	createdict("numbers.dict");
}
