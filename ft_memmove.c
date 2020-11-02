/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:02:57 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/22 17:42:49 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char		*chbuf1;
	const unsigned char	*chbuf2;
	unsigned char		*chlbuf1;
	const unsigned char	*chlbuf2;

	if (!buf1 && !buf2)
		return (NULL);
	chbuf1 = (unsigned char *)buf1;
	chbuf2 = (const unsigned char *)buf2;
	if (chbuf1 < chbuf2)
	{
		while (n--)
			*chbuf1++ = *chbuf2++;
	}
	else
	{
		chlbuf1 = chbuf1 + (n - 1);
		chlbuf2 = chbuf2 + (n - 1);
		while (n--)
			*chlbuf1-- = *chlbuf2--;
	}
	return (buf1);
}
