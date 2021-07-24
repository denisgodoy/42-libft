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
	printf("Expected: %d, Got: %d\n", isalpha(al), ft_isalpha(al));
	printf("Expected: %d, Got: %d\n", isalpha(num), ft_isalpha(num));
	printf("Expected: %d, Got: %d\n", isalpha(not_alnum), ft_isalpha(not_alnum));
}
