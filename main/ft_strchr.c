#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	int		find;

	string = "Hello World";
	find = 'o';
	printf("Test: %s\nExpected: %s\nGot: %s\n",
		string, strchr(string, find), ft_strchr(string, find));
}
