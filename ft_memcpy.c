/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:40:37 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/20 09:57:33 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dd = dst;
	const char *ss = src;
	while (n--)
		*dd++ = *ss++;
	return (dst);
}

