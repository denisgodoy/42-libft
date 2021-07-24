#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	al;
	int	num;
	int	not_print;

	al = 'a';
	num = 49;
	not_print = 128;
	printf("Expected: %d, Got: %d\n", isprint(al), ft_isprint(al));
	printf("Expected: %d, Got: %d\n", isprint(num), ft_isprint(num));
	printf("Expected: %d, Got: %d\n", isprint(not_print), ft_isprint(not_print));
}
