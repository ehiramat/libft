/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:35:32 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/22 17:31:13 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*chardest;
	const unsigned char	*charsrc;
	unsigned char		uc;
	size_t				i;

	chardest = (unsigned char *)dest;
	charsrc = (const unsigned char *)src;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		chardest[i] = charsrc[i];
		if (charsrc[i] == uc)
			return (&chardest[i + 1]);
		i++;
	}
	return (NULL);
}
