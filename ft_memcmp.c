/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:39:52 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/24 23:40:41 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t len;
   	char *ss1 = (char *)s1;
	char *ss2 = (char *)s2;
	len = 0; 
	if(n > 0)
	{
		while (len <= n)
		{
			if ( ss1[len] != ss2[len])
				return (ss1[len] - ss2[len]);
			len++;
		}
	}
	return(0);
}
