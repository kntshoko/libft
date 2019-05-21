#include <stri#include <stdlib.h>


int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dd = dst;
	const char *ss = src;
	int c;

	c =0;
	while (n --)
	{
		dd[c] = ss[c];
		c++;
	}
	return (dst);
}
char    *ft_strcpy(char *str1, char *str2)
{
	return (ft_memcpy(str1, str2, ft_strlen(str2)));
}

