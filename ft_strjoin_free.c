/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:18:55 by tamarant          #+#    #+#             */
/*   Updated: 2019/05/22 14:53:31 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int opt)
{
	char *res;

	res = ft_strjoin(s1, s2);
	if (opt == 1 || opt > 2)
		free(s1);
	else if (opt >= 2)
		free(s2);
	return (res);
}
