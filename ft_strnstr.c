/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:20:07 by mtsatrya          #+#    #+#             */
/*   Updated: 2021/01/29 19:54:33 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int loc)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (needle[len])
		len++;
	if (*needle == '\0')
		return (char *)haystack;
	while (len < loc)
	{
		if (*haystack == *needle)
		{
			if (i == len)
				return (char *)haystack;
			if (haystack[i] != needle[i])
				break ;
		}
		loc--;
		haystack++;
	}
	return (NULL);
}
