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
	not_alnum = ' ';
	printf("Expected: %d, Got: %d\n", isalnum(al), ft_isalnum(al));
	printf("Expected: %d, Got: %d\n", isalnum(num), ft_isalnum(num));
	printf("Expected: %d, Got: %d\n", isalnum(not_alnum), ft_isalnum(not_alnum));
}
