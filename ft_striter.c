/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:31:42 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/28 10:38:02 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		f(s[l]);
		l++;
	}
}
