#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	al;
	int	num;
	int	not_alnum;

	al = 'a';
	num = 49;
	not_alnum = 128;
	printf("Expected: %d, Got: %d\n", isdigit(al), ft_isdigit(al));
	printf("Expected: %d, Got: %d\n", isdigit(num), ft_isdigit(num));
	printf("Expected: %d, Got: %d\n", isdigit(not_alnum), ft_isdigit(not_alnum));
}
