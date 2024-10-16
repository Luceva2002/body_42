/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:56:09 by luevange          #+#    #+#             */
/*   Updated: 2024/10/02 15:25:21 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int a = 7;
	int b = 3;
	int *div;
	int *mod;
	int q = 0;
	int r = 2;
	div = &q;
	mod = &r;

	ft_div_mod(a, b, mod, div);
	printf("quoziente : %d  resto : %d ", q , r);
	return(0);
}*/
