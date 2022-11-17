/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:24:20 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/17 01:55:28 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char s)
{
	int	length;

	length = 0;
	if (s == 'c')
		length += ft_print_char(va_arg(args, int));
	else if (s == 's')
		length += ft_print_str(va_arg(args, char *));
	else if (s == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long));
	else if (s == 'd' || s == 'i')
		length += ft_print_dec(va_arg(args, int));
	else if (s == 'u')
		length += ft_print_unnbr(va_arg(args, unsigned int));
	else if (s == 'x')
		length += ft_print_hexa(va_arg(args, unsigned long long), 'x');
	else if (s == 'X')
		length += ft_print_hexa(va_arg(args, unsigned long long), 'X');
	else if (s == '%')
		length += write (1, "%", 1);
	return (length);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[++i] == '\0')
				break ;
			i--;
			length += ft_format(args, s[i + 1]);
			i++;
		}
		else
			length += ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	if (length < 0)
		return (-1);
	return (length);
}
