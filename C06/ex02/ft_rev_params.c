#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = ac - 1;
	while (i != 0)
	{
		ft_rev_params(av[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
