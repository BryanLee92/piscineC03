#include<string.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("%s\n", ft_strstr("I am idiot haha don't you know", "idiot"));
	//return 'idiot haha don't you know'
	printf("%s\n", ft_strstr("No money no talk", "mani")); //(null)
	printf("%s\n", ft_strstr("zzz i am so bored", "b")); //bored
}
