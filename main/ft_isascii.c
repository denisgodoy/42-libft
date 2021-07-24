#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	al;
	int	num;
	int	not_ascii;

	al = 'a';
	num = 49;
	not_ascii = 128;
	printf("Expected: %d, Got: %d\n", isascii(al), ft_isascii(al));
	printf("Expected: %d, Got: %d\n", isascii(num), ft_isascii(num));
	printf("Expected: %d, Got: %d\n", isascii(not_ascii), ft_isascii(not_ascii));
}
