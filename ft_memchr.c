/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:21:56 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:36:56 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchar(const void *s, int c, size_t n)
{
	int len;

	while(len <= n)
	{
		if (*s == c)
			return(char*)s;
		len ++;
		s ++;
	}
	return (NULL);
}
