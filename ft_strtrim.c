/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:56:07 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/15 15:26:32 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char 	*res;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (len)
		len--;
	i = 0;
	j = 0;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len] == 32 || s[len] == '\n' || s[len] == '\t')
		len--;
	if (i < len)
		len = len - i + 1;
	res = (char *) malloc(sizeof(*res) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (j < len)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
