/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:03 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:38:07 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *str1, char *str2)
{
    int cont;
    int len;

    len = ft_strlen(str1);
    cont = 0;
    while (str2[cont])
    {
        str1[len] = str2[cont];
        len ++;
        cont++;
    }
    return(str1);
}
