/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:37:24 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/12 21:05:37 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_itoa(int n)
{
	int		len;
	int		neg;
	int		buf;
	char	*res;

	len = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -1 * n;
	}
	buf = n;
	while (buf > 0)
	{
		buf = buf /10;
		len++;
	}
	len += neg;
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	len--;
	res[len] = '\0';
	while (n > 0)
	{
		res[len--] = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
