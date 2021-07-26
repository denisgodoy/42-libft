int	ft_atoi(const char	*nptr)
{
	int	i;
	int	c_minus;
	int	num;

	num = 0;
	c_minus = 0;
	i = 0;
	while (nptr[i] == ' '
		|| (nptr[i] >= '\t' && nptr[i] <= '\r')
		|| nptr[i] == '+'
		|| nptr[i] == '-')
	{
		if (nptr[i] == '-')
			c_minus += 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	if (c_minus % 2 != 0)
		return (num *= -1);
	return (num);
}
