/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:09:09 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/30 13:06:24 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	char *s;
	size_t i;

	s = malloc(len);
	s = (char *)b;
	i = 0;
	while (len-- > i)
	{
		*s = (unsigned char)c;
		s++;
	}
	*s = '\0';
	return((void *)s);
}
