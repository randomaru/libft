/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:54:47 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/23 21:40:14 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int		ft_if_neg(const char *str)
{
	int neg;
	int i;

	neg = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			neg = 1;
			return (neg);
		}
	}
	return (neg);
}
*/

int				ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long long	res;

	i = 0;
	res = 0;
	neg = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13 && str[i] != '\0'))
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (res != (res * 10 + (str[i] - '0')) / 10)
		{
			if (neg)
				return (0);
			return (-1);
		}
		res = res * 10 + (str[i++] - '0');
	}
	if (neg)
		return (-res);
	return (res);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_atoi("12-23"));
	return (0);
}