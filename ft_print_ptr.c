/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:17:27 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/15 21:49:43 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_ptr(unsigned long nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}

void	ft_putlowerhex(unsigned long nbr)
{
	char			str[64];
	int				i;
	int				j;

	i = 0;
	if (nbr == 0)
		write (1, "0", 1);
	while (nbr != 0)
	{
		j = nbr % 16;
		if (j < 10)
			str[i] = j + 48;
		else
			str[i] = j + 87;
		nbr /= 16;
		i++;
	}
	j = i;
	while (j-- > 0)
		write (1, &str[j], 1);
}

int	ft_print_ptr(unsigned long ptr)
{
	int	length;

	length = 0;
	length += write (1, "0x", 2);
	if (ptr == 0)
		length += write (1, "0", 1);
	else
		ft_putlowerhex(ptr);
		length += ft_len_ptr(ptr);
	return (length);
}
