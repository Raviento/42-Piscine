
int	ft_recursive_power(int base, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (base * ft_recursive_power(base, power - 1));
}
