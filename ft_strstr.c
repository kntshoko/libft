/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 03:29:19 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/25 03:31:47 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int in;
	int ih;
	char *hy;
	char *tocmp;
	
	hy = (char *)haystack;
	in = 0;
	ih = 0;
	if (strlen(needle) == 0)
		return((char *)&haystack[ih]);
	while (hy[ih] != '\0')
	{
		while (in++ <= strlen(needle))
			tocmp[in - 1] = hy[ih + (in - 1)];
		if (strcmp(tocmp,needle) == 0)
			return((char *)&haystack[ih]);
		in = 0;
		ih++;
	}
	return(NULL);
}
