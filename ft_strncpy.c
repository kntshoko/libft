/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:39:43 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:39:55 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
