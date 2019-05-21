/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:39:14 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 11:01:14 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int c;

	 c = 0;
	 while (str1[c] == str2[c] && str1[c] != '\0' && c < n)
			c++;
	return(str1[c] - str2[c]);
}
