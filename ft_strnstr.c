/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:13:42 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/16 19:22:09 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ne[0] == '\0')
		return ((char*)ha);
	while (ha[i] != '\0')
	{
		j = 0;
		while (ne[j] == ha[i + j] && i + j < len)
		{
			if (j + 1 == ft_strlen(ne))
				return ((char*)&ha[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
