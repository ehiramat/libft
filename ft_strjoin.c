/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:39:48 by ehiramat          #+#    #+#             */
/*   Updated: 2020/11/02 23:19:35 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	size;
	char	*res;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(res = (char *)malloc(size * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		res[i] = s1[i];
	k = 0;
	while (s2[k] != '\0')
		res[i++] = s2[k++];
	res[i] = '\0';
	return (res);
}
