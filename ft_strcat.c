/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:03 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 16:09:52 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}
char    *ft_strcat(char *str1, char *str2)
{
    int cont;
    int len;

    len = ft_strlen(str1);
    cont = 0;
    while (str2[cont] != '\0')
    {
        str1[len + cont] = str2[cont];
        cont++;
    }
	str1[len + cont] = '\0'; 
    return(str1);
}
