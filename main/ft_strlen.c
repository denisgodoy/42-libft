#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;

	string = "Hello World";
	printf("Test: %s\nExpected: %lu\nGot: %lu\n",
		string, strlen(string), ft_strlen(string));
}
