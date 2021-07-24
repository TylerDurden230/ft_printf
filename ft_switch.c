/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fd-agnes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:25:14 by fd-agnes          #+#    #+#             */
/*   Updated: 2021/02/17 18:25:17 by fd-agnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_spec(const char ch)
{
	if (ch == 'c' || ch == 's' || ch == 'i' || ch == 'd' ||
			ch == 'x' || ch == 'X' || ch == 'p' || ch == 'u' || ch == '%')
		return (1);
	return (0);
}

int		ft_precision(const char **str)
{
	int		precision;
	char	*num;

	num = ft_calloc(11, 1);
	precision = 0;
	while (**str > 47 && **str < 58)
	{
		num[precision++] = **str;
		(*str)++;
	}
	precision = atoi(num);
	free(num);
	(*str)--;
	return (precision);
}

char	*cts(char c, t_flags *flags)
{
	char *carat;

	carat = malloc(2);
	carat[0] = c;
	carat[1] = '\0';
	flags->null = !c ? 1 : 0;
	return (carat);
}

char	*s_parse(char *ret, va_list args)
{
	ret = va_arg(args, char*);
	if (!ret)
		ret = ft_strdup("(null)");
	else
		ret = ft_strdup(ret);
	return (ret);
}

char	*parse_spec(char c, va_list args, t_flags *flags)
{
	char *ret;

	ret = 0;
	if (c == 'c')
		ret = (cts(va_arg(args, int), flags));
	else if (c == 's')
	{
		ret = s_parse(ret, args);
	}
	else if (c == 'd' || c == 'i')
		ret = ft_itoa(va_arg(args, int));
	else if (c == 'u')
		ret = ft_uitoa(va_arg(args, unsigned int));
	else if (c == 'x')
		ret = conv_hexa(va_arg(args, unsigned int));
	else if (c == 'X')
		ret = conv_caphexa(va_arg(args, unsigned int));
	else if (c == 'p')
		ret = conv_add(va_arg(args, size_t));
	else if (c == '%')
		ret = cts(c, flags);
	return (ret);
}
