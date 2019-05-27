/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:35:29 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/27 10:21:37 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *dd = dst;
   	const char *ss = (const void*)src;
	int len;

	len = 0;
	if (dd < ss)
		while (n--)
			*dd++ = *ss++;
	else
	{
		while (n--)
		dd[len+n] = ss[len+n];
	}
	return(dst);
}
