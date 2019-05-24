/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:14:40 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/24 10:17:42 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *dd = (void *)dst;
   	char *ss = (void *)src;
	int cc;

	cc = 0;
	while (c != ss[cc] && c <= n)
	{
		dd[cc] = ss[c];
		c++;
		dd++;
	}
	if (c > n)
		return (NULL);
	return(char *)dd;
}
