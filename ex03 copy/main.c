#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, int nb);

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
	char a[15] = "I am";
	char b[15] = "I am";
	char c[50] = "lol";
	char d[10] = "lol";
	char e[10] = "";
	char f[10] = "";
	char g[15] = "hey girl";
	
	putstr(ft_strncat(a, " dumb", 10)); //I am dumb
	write(1, &"\n", 1);
	putstr(ft_strncat(b, " dumb", 4)); //I am dum
	write(1, &"\n", 1);
	putstr(ft_strncat(c, " zz", 50)); //lol zz
	write(1, &"\n", 1);
	putstr(ft_strncat(d, "z z", 1)); //lolz
	write(1, &"\n", 1);
	putstr(ft_strncat(e, "Hell Yeah", 6)); //Hell Y
	write(1, &"\n", 1);
	putstr(ft_strncat(f, "Life sucks", 0)); //
	write(1, &"\n", 1);
	putstr(ft_strncat(g, "", 12)); //hey girl
}
