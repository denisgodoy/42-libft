#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 122;
	while (i > 94)
	{
		printf("Test: %c\nExpected: %c\nGot: %c\n\n",
			i, toupper(i), ft_toupper(i));
		i--;
	}
}
