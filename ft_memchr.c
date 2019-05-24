/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:21:56 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/24 22:25:19 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *dst, int c , size_t n)
{
	const char *d = (const void *)dst;
	size_t len;

	len = 0;
	while (len <= n)
	{
		if ( d[len] == (char)c)
			return ((void *)&d[len]);
		d++;
		len++;
	}
	return(NULL);
}
