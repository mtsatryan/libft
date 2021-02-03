/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:54:41 by mtsatrya          #+#    #+#             */
/*   Updated: 2021/02/03 15:52:43 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*tmp_src;
	size_t		tmp_size;

	tmp_src = src;
	tmp_size = dstsize;
	if (tmp_size != 0)
	{
		while (--tmp_size != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (tmp_size == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - tmp_src - 1);
}
