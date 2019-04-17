/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:04:51 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/16 19:11:59 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *ha, const char *ne)
{
	size_t i;
	size_t j;

	i = 0;
	if (ne[0] == '\0')
		return ((char*)ha);
	while (ha[i] != '\0')
	{
		j = 0;
		while (ne[j] == ha[i + j])
		{
			if (j + 1 == ft_strlen(ne))
				return ((char*)&ha[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
