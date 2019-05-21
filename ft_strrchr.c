/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:47:34 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 18:08:36 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strrchr(const char *str, int c)
{
	int len;

	len = strlen(str); 
    if (str [ len] == c)
        return(char *)str;
    while (len != -2)
    {
		len --;
		if (len == -1)
			return(NULL);
   	}

	return(char *)str;
}
