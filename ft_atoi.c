/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehiramat <ehiramat@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:53:44 by ehiramat          #+#    #+#             */
/*   Updated: 2020/10/27 14:03:06 by ehiramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_check(long long num)
{
	if (num > 2147483647 && num < 9223372036854775807L)
		return (0);
	else if (num < -2147483648 && num >= -9223372036854775807L)
		return (-1);
	if (num >= 9223372036854775807L)
		return (-1);
	else if (num < -9223372036854775807L)
		return (0);
	else
		return (num);
}

int			ft_atoi(const char *str)
{
	int			i;
	long long	num;
	int			flag;

	i = 0;
	num = 0;
	flag = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		flag *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	num = ft_check(num * flag);
	return (num);
}
