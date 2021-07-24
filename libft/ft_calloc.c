/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:06:54 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/01/19 16:56:32 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	char	*dst;

	tot_size = count * size;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
