/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:47:51 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/01/15 18:42:52 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int k;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < (int)len)
	{
		k = 0;
		while (haystack[i + k] == needle[k] &&
				haystack[i + k] != '\0' && (i + k) < (int)len)
			k++;
		if (needle[k] == '\0')
			return ((char*)haystack + i);
		i++;
		k = 0;
	}
	return (NULL);
}
