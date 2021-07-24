/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 12:54:55 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/01/16 17:41:28 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(const char *set, char c)
{
	int i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t len;
	size_t i;
	size_t k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	if (ft_check(set, s1[0]))
	{
		while (s1[i] != '\0' && ft_check(set, s1[i]))
			i++;
	}
	k = ft_strlen(s1) - 1;
	if (ft_check(set, s1[k]))
	{
		while (k > i && ft_check(set, s1[k]))
			k--;
	}
	len = k - i + 1;
	return (ft_substr(s1, i, len));
}
