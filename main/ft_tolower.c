#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	al;
	int	al2;
	int	not_al;

	al = 'A';
	al2 = 112;
	not_al = 52;
	printf("Test: %c\nExpected: %c, Got: %c\n\n", al, tolower(al), ft_tolower(al));
	printf("Test: %c\nExpected: %c, Got: %c\n\n", al2, tolower(al2), ft_tolower(al2));
	printf("Test: %c\nExpected: %c, Got: %c\n", not_al, tolower(not_al), ft_tolower(not_al));
}
