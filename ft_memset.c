/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:44:30 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/26 12:47:40 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		res[i] = ch;
		i++;
	}
	return ((void *)res);
}
