#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src);

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char a[20] = "I am";
	char b[20] = "lol";
	char c[20] = "lol";
	
	putstr(strcat(a, "dumb")); //I amdumb
	write(1, &"\n", 1);
	putstr(strcat(b, "zz")); //lolzz
	write(1, &"\n", 1);
	putstr(strcat(c, "")); //lol
}
