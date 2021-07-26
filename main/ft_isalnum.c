#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 66;
	while (i > 55)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isalnum(i), ft_isalnum(i));
		i--;
	}
}
