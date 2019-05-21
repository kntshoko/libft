/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:37 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:38:58 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *str1, char *str2, int n)
{
    int cont;
    int len;

    len = ft_strlen(str1);
    cont = 0;
    if (n > ft_strlen(str2))
    {
        return(NULL);
    }
    while (cont <= n)
    {
        str1[len] = str2[cont];
        len ++;
        cont ++;
    }
    return (str1);
}
