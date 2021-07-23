int	ft_atoi(const char	*nptr)
{
	int	i;
	int	c_minus;
	int	num;

	num = 0;
	c_minus = 0;
	i = 0;
	while (nptr[i] == 32
		|| (nptr[i] >= 9 && nptr[i] <= 13)
		|| nptr[i] == 43
		|| nptr[i] == 45)
	{
		if (nptr[i] == 45)
			c_minus += 1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	if (c_minus % 2 != 0)
		return (num *= -1);
	return (num);
}
