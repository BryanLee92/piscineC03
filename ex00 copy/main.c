#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%i\n", ft_strcmp("hhh", "hhh")); //0
	printf("%i\n", ft_strcmp("hh h", "hhh")); //-1
	printf("%i\n", ft_strcmp("hhh", "hh h")); //1

	printf("%s\n", "-----");

	printf("%i\n", ft_strcmp("hhh", "hhhh")); //-1
	printf("%i\n", ft_strcmp("hhhh", "hhh")); //1

	printf("%s\n", "-----");

	printf("%i\n", ft_strcmp("", "")); //0
	printf("%i\n", ft_strcmp("", "a")); //-1
	printf("%i\n", ft_strcmp("a", "")); //1

	printf("%s\n", "-----");

	printf("%i\n", ft_strcmp("aaa", "z")); //-1
	printf("%i\n", ft_strcmp("9", "12345")); //1

	printf("%s\n", "-----");

	printf("%i\n", ft_strcmp("I am great", "I am Great")); //1
	printf("%i\n", ft_strcmp("I am", "I am very awesome")); //-1

	/*printf("%i\n", ft_strcmp("aa", "AA"));
	printf("%i\n", ft_strcmp("AA", "aa"));
	printf("%i", ft_strcmp("", "zzz"));*/
}
