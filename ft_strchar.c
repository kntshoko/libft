/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:18 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 17:07:00 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strchr(const char *str, int c)
{
	int cc;
	int len;

	len = strlen(str);
	cc = 0;
    if (str[cc] == c)
        return(char *)str;
    while (str++)
    {
		if (cc >= len)
			return(NULL);
		cc++;
    }

	return(char *)str;
}
