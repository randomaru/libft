/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:00:20 by tamarant          #+#    #+#             */
/*   Updated: 2019/04/11 19:42:18 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2 && n > 0)
	{
		while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
		{
			if (s1[i] == s2[i])
				i++;
			else
				break;
		}
	}
	if (i == n || ((!s1 || !s2) && n == 0) || (s1 && s2 && n == 0) || (!s1 && !s2 && n == 0))
		return (1);
	else if ((!s1 || !s2) && n > 0)
		return (0);
	else
		return (0);
}
