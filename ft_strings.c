/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:24:22 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/02/17 18:24:27 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strings(char *ret, t_flags flags)
{
	if (flags.precision == -1 && flags.width == 0)
		return (ret);
	if (flags.precision == 0)
	{
		free(ret);
		ret = (ft_strdup(""));
	}
	else if (flags.precision)
	{
		if ((size_t)flags.precision < ft_strlen(ret))
			ret[flags.precision] = 0;
	}
	if (flags.width && (size_t)flags.width > ft_strlen(ret))
		ret = ft_spaces(ret, flags);
	return (ret);
}
