
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = NULL;
	res = malloc(sizeof (char) * (size + 1));
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof (t_stock_str) * (ac + 1));
	if (stocks == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strcpy(av[i], stocks[i].size);
        if (stocks[i].copy == NULL)
		{
			while (--i >= 0)
				free(stocks[i].copy);
			free(stocks);
			return (NULL);
		}
        ft_strcpy(stocks[i].copy, av[i]);
        i++;
	}
	stocks[i].size = 0;
	stocks[i].str = 0;
	stocks[i].copy = 0;
	return (stocks);
}