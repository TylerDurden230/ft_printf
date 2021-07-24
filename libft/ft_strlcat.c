/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:15:12 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/01/19 17:45:22 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	if (dstsize <= (size_t)ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	k = 0;
	while (src[k] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[k]));
}
