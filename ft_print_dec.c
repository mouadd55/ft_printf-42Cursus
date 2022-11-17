/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:24:43 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/17 01:48:56 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_dec(int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
	{
		length++;
		nbr *= (-1);
	}
	while (nbr != 0)
	{
		length++;
		nbr /= 10;
	}
	return (length);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_print_char('-');
		nbr *= (-1);
	}
	if (nbr < 10)
		ft_print_char(nbr + 48);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_print_dec(int nbr)
{
	ft_putnbr(nbr);
	return (ft_length_dec(nbr));
}
