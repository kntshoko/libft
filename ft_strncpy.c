#include <string.h>
#include <unistd.h>
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
char    *ft_strncpy(char *str1, char *str2, int n)
{
	return (ft_memcpy(str1, str2, n));
}
