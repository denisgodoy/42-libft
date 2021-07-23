int	ft_atoi(const char	*nptr)
{
	int	i;
	int	count_minus;
	int	dest;

	dest = 0;
	count_minus = 0;
	i = 0;
	while (nptr[i] == 32
		|| (nptr[i] >= 9 && nptr[i] <= 13)
		|| nptr[i] == 43
		|| nptr[i] == 45)
	{
		if (nptr[i] == 45)
			count_minus += 1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		dest = dest * 10 + (nptr[i] - 48);
		i++;
	}
	if (count_minus % 2 != 0)
		return (dest *= -1);
	return (dest);
}
