/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:44:32 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:44:49 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}
// FT_STRDUP
char    *ft_strdup(char *str)
{
    char str2;
    int cont;

    cont = ft_strlen(str);
    if (!(str2 =(char*) malloc(sizeof(char)*(cont + 1))))
        return (NULL);
    while (cont + 1 >= 0)
    {
        str2[cont] = str[cont];
        cont--;
    }
    return (str2);
}
