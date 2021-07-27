#include	"libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	int			size;
	const char	*string;

	size = ft_strlen(s);
	string = &s[size];
	while (*(--string))
	{
		if (*string == (char)c)
			return ((char *)string);
	}
	return (0);
}
