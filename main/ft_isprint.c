#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 132;
	while (i > 123)
	{
		printf("Test: %c\nExpected: %d, Got: %d\n\n",
			i, isprint(i), ft_isprint(i));
		i--;
	}
	printf("Test: %c\nExpected: %d, Got: %d\n\n",
		32, isprint(i), ft_isprint(i));
}
