/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:17:27 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/17 01:50:34 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long nbr)
{
	char			str[16];
	int				i;
	int				length;

	length = 0;
	i = 0;
	if (nbr == 0)
		length += write (1, "0", 1);
	while (nbr != 0)
	{
		if ((nbr % 16) < 10)
			str[i] = (nbr % 16) + 48;
		else
			str[i] = (nbr % 16) + 87;
		nbr /= 16;
		i++;
	}
	while (i--)
		length += write (1, &str[i], 1);
	return (length);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	length;

	length = 0;
	length += write (1, "0x", 2);
	if (ptr == 0)
		length += write (1, "0", 1);
	else
		length += ft_puthex(ptr);
	return (length);
}
