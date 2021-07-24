#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	int		find;

	string = "abcdefghijklmnopqrstuvwxyz";
	find = 'a';
	while (find <= 'z')
	{
		printf("Start at: %c\nExpected: %s\nGot: %s\n\n",
			find, strchr(string, find), ft_strchr(string, find));
		find++;
	}
}
