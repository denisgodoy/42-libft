#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 92;
	while (i > 64)
	{
		printf("Test: %c\nExpected: %c, Got: %c\n\n",
			i, tolower(i), ft_tolower(i));
		i--;
	}
}
