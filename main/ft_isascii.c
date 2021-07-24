#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 130;
	while (i > 121)
	{
		printf("Test: %c\nExpected: %d, Got: %d\n\n",
			i, isascii(i), ft_isascii(i));
		i--;
	}
	printf("Test: %c\nExpected: %d, Got: %d\n\n",
			0, isascii(i), ft_isascii(i));
}
