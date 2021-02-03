/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:17:04 by mtsatrya          #+#    #+#             */
/*   Updated: 2021/01/22 16:31:51 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (char *)s1;
	dst = (char *)s2;
	while (i < n)
	{
		if (src[i] == dst[i])
			return (0);
		else
			return (src - dst);
		i++;
	}
	return (0);
}
