#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 132;
	while (i > 123)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isascii(i), ft_isascii(i));
		i--;
	}
	printf("Test: %c\nExpected: %d, Got: %d\n\n",
		0, isascii(i), ft_isascii(i));
}
