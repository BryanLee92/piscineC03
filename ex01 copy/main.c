#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%i\n", ft_strncmp("aaaa", "aaaa", 3)); //0 (both same)
	printf("%i\n", ft_strncmp("aaaa", "aaaa", 10)); //0 [both same(terminated)]
	
	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("zzz", "zzzz", 3)); //0 (both same)
	printf("%i\n", ft_strncmp("zzz", "zzzz", 4)); //-1 [Fourth char differed(former terminated)]
	printf("%i\n", ft_strncmp("zzzz", "zzz", 4)); //1 [Fourth char differed(latter terminated)]
	printf("%i\n", ft_strncmp("zzzz", "zzz", 100)); //1 [Fourth char differed(latter terminated)]

	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("abcd", "abzd", 2)); //0 (both same)
	printf("%i\n", ft_strncmp("abcd", "abzd", 4)); //-1 (Third char differed)
	printf("%i\n", ft_strncmp("abzd", "abcd", 100)); //1 (Third char differed)

	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("a2428fafd958230vs535", "z", 0)); //0
	printf("%i\n", ft_strncmp("a2428958230535", "z", 2000)); //-1 (First char differed)

	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("You are awesome", "You are", 3)); //0
	printf("%i\n", ft_strncmp("You are awesome", "You are", 50)); //1
	
	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("You are super super awesome!", "You are super super awesome", 27)); //0
	printf("%i\n", ft_strncmp("You are super super awesome", "You are super super awesome!", 28)); //-1
	printf("%i\n", ft_strncmp("You are Super super awesome!", "You are super super awesome", 10000)); //-1

	printf("%s\n", "------");

	printf("%i\n", ft_strncmp("lol", "", 59)); //1
	printf("%i\n", ft_strncmp("lol", "", 2)); //1
	printf("%i\n", ft_strncmp("", "lol", 59)); //-1
	printf("%i\n", ft_strncmp("", "lol", 2)); //-1
	printf("%i\n", ft_strncmp("", "", 10)); //0
	printf("%i\n", ft_strncmp("", "", 2)); //0
}
