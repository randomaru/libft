/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:29:04 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/12 15:22:22 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fs;

	i = 0;
	fs = (char*)malloc(sizeof(*fs) * (ft_strlen((char*)s) + 1));
	if (s && fs)
	{
		while (s[i] != '\0')
		{
			fs[i] = f(s[i]);
			i++;
		}
		fs[i] = '\0';
		return (fs);
	}
	else
		return (NULL);
}
