/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:40:50 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/16 15:31:15 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		i += write (1, "(null)", 6);
	else
	{
		while (str[i])
			ft_print_char(str[i++]);
	}
	return (i);
}
