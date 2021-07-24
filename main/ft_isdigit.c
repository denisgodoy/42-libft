#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 57;
	while (i > 42)
	{
		printf("Test: %c\nExpected: %d, Got: %d\n\n",
			i, isdigit(i), ft_isdigit(i));
		i--;
	}
}
