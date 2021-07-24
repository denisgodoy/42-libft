#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	al;
	int	al2;
	int	not_al;

	al = 'a';
	al2 = 90;
	not_al = 52;
	printf("Test: %c\nExpected: %c, Got: %c\n\n", al, toupper(al), ft_toupper(al));
	printf("Test: %c\nExpected: %c, Got: %c\n\n", al2, toupper(al2), ft_toupper(al2));
	printf("Test: %c\nExpected: %c, Got: %c\n", not_al, toupper(not_al), ft_toupper(not_al));
}
