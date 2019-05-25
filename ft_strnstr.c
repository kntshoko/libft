/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 05:38:28 by kntshoko          #+#    #+#             */
/*   Updated: 2019/05/25 05:44:30 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int in;
	int ih;
	int s;
	char *hy = (char *)haystack;
	char *tocmp;

	in = 0;
	ih = 0;
	if (strlen(needle) == 0)
		return((char *)&haystack[ih]);

		while (hy[ih] <= len)
		{
			while (in <= strlen(needle))
			{
				tocmp[in] = hy[ih + in];
				in++;
			}
			in = 0;
			if (strcmp(tocmp,needle) == 0)
			{
				s = ih;
				while (len--)
				{
					tocmp[in++] = hy[ih++];
					return((char *)&tocmp[s]);
				}
		}
			ih++;
		}
		return(NULL);
}
