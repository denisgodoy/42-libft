#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 98;
	while (i > 88)
	{
		printf("Test: %c\nExpected: %d, Got: %d\n\n",
			i, isalpha(i), ft_isalpha(i));
		i--;
	}
}
