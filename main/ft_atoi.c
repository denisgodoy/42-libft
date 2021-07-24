#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

int	main(void)
{
	char	*string;
	char	*string2;

	string = " \n \t \r \v2143a648asd";
	string2 = " \n     ---+314-1dfg";
	printf ("Test: %s\nExpected: %d\nReturned: %d\n\n",
		string, atoi(string), ft_atoi(string));
	printf ("Test: %s\nExpected: -314\nReturned: %d\n",
		string2, ft_atoi(string2));
}
