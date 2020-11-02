/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:57:13 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/26 16:17:45 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t k;
	size_t l;

	i = ft_strlen(s1);
	l = ft_strlen(s2);
	k = 0;
	if (i >= size)
		return (size + l);
	while (i + k + 1 < size && s2[k] && k < l)
	{
		s1[i + k] = s2[k];
		k++;
	}
	s1[i + k] = '\0';
	return (i + l);
}
