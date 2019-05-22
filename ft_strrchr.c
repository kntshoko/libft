/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:47:34 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/22 11:39:37 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strrchr(const char *str, int c)
{
	int len;

	len = strlen(str);
    if ('\0' == (char)c)
        return(strchr(str,'\0'));
	len--;
	while (len >= 0)
	{
		if(str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return(NULL);
}
