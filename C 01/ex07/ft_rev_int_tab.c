void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	control;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		control = tab[end];
		tab[end] = tab[start];
		tab[start] = control;
		start++;
		end--;
	}
}