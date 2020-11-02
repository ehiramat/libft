/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:23:40 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/27 12:16:27 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haysback, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	n;

	if (ft_strlen(needle) == 0)
		return ((char *)haysback);
	if (len == 0)
		return (NULL);
	else if (!(needle_len = (ft_strlen(needle) > len
					? len : ft_strlen(needle))))
		return (char *)haysback;
	i = 0;
	while (haysback[i] && i < len)
	{
		n = 0;
		while (haysback[i + n] && needle[n] &&
				needle[n] == haysback[i + n] && i + n < len)
			n++;
		if (needle[n] == '\0')
			return (char *)&haysback[i];
		i++;
	}
	return (NULL);
}
