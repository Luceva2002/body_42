/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:56:24 by luevange          #+#    #+#             */
/*   Updated: 2024/10/06 17:48:02 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **createdict(char *dict);

int	check(char *str);

void	strcp_num(char *src, char *dest);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		createdict("numbers.dict");
		strcp_num();
		check();
	}
	if (ac == 3)
	{
		createdict(av[2]);
		strcp_num();
		check();
	}
	return (0);	

}
