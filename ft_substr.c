/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:41:03 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/27 13:58:17 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	sublen;
	char			*subs;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	sublen = ft_strlen(&s[start]);
	i = 0;
	if (sublen >= len)
		sublen = len;
	if (!(subs = (char *)malloc((sublen + 1) * sizeof(char))))
		return (NULL);
	while (sublen > i && s[start + i])
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
