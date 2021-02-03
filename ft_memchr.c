/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:28:00 by mtsatrya          #+#    #+#             */
/*   Updated: 2021/01/22 19:18:30 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cc;

	i = 0;
	cc = (char *)s;
	while (i < n)
	{
		if (cc[i] == c)
			return (cc + i + 1);
		i++;
	}
	return (NULL);
}
