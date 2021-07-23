char	*ft_strchr(const char	*s, int	c)
{
	int	i;


	i = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

int	main(void)
{
	char	*string;
	int		c;

	string = "olaa";
	c = 'a';
	return (0);
}
