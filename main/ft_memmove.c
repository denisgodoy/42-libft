#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	arr1[10] = "Ola";
	char	arr2[10] = "Hello";
	char	arr3[10] = "Ola 42";
	char	arr4[10] = "Hola";
	
	printf("Copy 2 bytes from arr2 to arr1\narr1 = %s | arr2 = %s\n", arr1, arr2);
	printf("ft_memmove: %s\n", ft_memmove(arr1, arr2, 2));
	printf("memmove: %s\n", memmove(arr1, arr2, 2));
	printf("Result: %s\n\n", arr1);
	printf("Copy 3 bytes from arr3 to arr3[6]\narr3 = %s\n", arr3);
	printf("ft_memmove: %s\n", ft_memmove(arr3 + 6, arr3, 3));
	printf("memmove: %s\n", memmove(arr3 + 6, arr3, 3));
	printf("Result: %s\n\n", arr3);
	printf("Copy 4 bytes from arr3 to arr1\narr4 = %s | arr1 = %s\n", arr4, arr1);
	printf("ft_memmove: %s\n", ft_memmove(arr1 + 2, arr4, 4));
	printf("memmove: %s\n", memmove(arr1 + 2, arr4, 4));
	printf("Result: %s\n\n", arr1);
	printf("Copy 2 bytes from arr1 to arr1[2]\narr1 = %s\n", arr1);
	printf("ft_memmove: %s\n", ft_memmove(arr1 + 2, arr1, 2));
	printf("memmove: %s\n", memmove(arr1 + 2, arr1, 2));
	printf("Result: %s\n", arr1);
}
