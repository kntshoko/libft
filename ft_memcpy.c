/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:40:37 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:37:20 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dd = dst;
	const char *ss = src;
	int c;
	
	c = 0;
	while (n--)
	{
		
		dd[c] = ss[c];
		c++;
	}
	return (dst);
}

