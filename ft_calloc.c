/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:30:46 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/26 12:44:00 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*dest;
	size_t	i;

	if (!(dest = malloc(num * size)))
		return (NULL);
	i = 0;
	while (i < num * size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
