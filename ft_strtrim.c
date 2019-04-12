/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:56:07 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/12 20:19:25 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	num;
	size_t	i;
	size_t	j;
	char 	*res;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	num = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		num++;
		i++;
	}
	while ((s[len - 1] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		num++;
		len--;
	}
	len = ft_strlen(s) - num;
	res = (char*)malloc(sizeof(*res) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (j < len && i <= len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
