/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:28:37 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/01/20 18:56:38 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	k;
	char			*substr;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(substr = malloc(len + 1)))
		return (NULL);
	i = start;
	k = 0;
	while (i < ft_strlen(s) && k < len)
	{
		substr[k] = s[i];
		i++;
		k++;
	}
	substr[k] = '\0';
	return (substr);
}
