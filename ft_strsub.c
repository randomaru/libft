/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:53:02 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/12 15:12:29 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (s == NULL || start > len_s || len > len_s
	|| ((size_t)start + len) > len_s)
		return (NULL);
	sub = (char*)malloc(sizeof(*sub) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (len == 0)
		sub[i] = '\0';
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
