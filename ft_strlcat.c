/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:31:21 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/28 16:32:14 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	if (src > dst)
		return(dstsize+ (strlen(src) ));
	return (strlen(dst) + dstsize);
}
