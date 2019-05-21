/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:39:14 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/21 08:39:19 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *str1, char *str2, int n)
{
    int cont;

    if (n > ft_strlen(str1))
        return(NULL);
    cont = ft_strlen(str2) - n;
    return (cont);
}
