/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:32:23 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/02/17 19:32:27 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	n;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s)
	{
		ft_strlcpy(s, s1, n + 1);
		ft_strlcat(s, s2, n + 1);
	}
	free(s2);
	return (s);
}

char	*ft_strjoin1(char *s1, char *s2)
{
	size_t	n;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s)
	{
		ft_strlcpy(s, s1, n + 1);
		ft_strlcat(s, s2, n + 1);
	}
	free(s1);
	return (s);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	size_t	n;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s)
	{
		ft_strlcpy(s, s1, n + 1);
		ft_strlcat(s, s2, n + 1);
	}
	free(s1);
	free(s2);
	return (s);
}
