/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:00:03 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/05 21:20:50 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cop;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	cop = (char*)malloc(sizeof(*src) * (len + 1));
	if (cop == NULL)
		return (0);
	len = 0;
	while (src[len] != '\0')
	{
		cop[len] = src[len];
		len++;
	}
	cop[len] = '\0';
	return (cop);
}
