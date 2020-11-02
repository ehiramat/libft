/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:31:23 by ehiramat          #+#    #+#             */
/*   Updated: 2020/11/02 23:26:33 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		mem_free(char **res, int k)
{
	while (k >= 0)
	{
		free(res[k]);
		k--;
	}
	free(res);
	return (0);
}

int		ft_subsplit(char **res, char *via, int len, int c)
{
	int	i;
	int	k;

	k = 0;
	while (k < len)
	{
		i = 0;
		while (via[i] != c && via[i] != '\0')
		{
			i++;
		}
		if (i > 0)
		{
			if (!(res[k] = ft_substr(via, 0, i)))
				return (mem_free(res, k));
			k++;
		}
		i++;
		via = via + i;
	}
	res[k] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	*via;
	char	**res;
	int		len;
	int		i;

	if (!(via = ft_strtrim(s, &c)))
		return (NULL);
	len = 0;
	i = 0;
	while (via[i] != '\0')
	{
		if (via[i] == c && via[i + 1] != c)
			len++;
		i++;
	}
	len++;
	if (!(res = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if (!(ft_subsplit(res, via, len, c)))
	{
		free(via);
		return (NULL);
	}
	free(via);
	return (res);
}
