/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:41:09 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/17 01:51:02 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

void	ft_putunnbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_print_char(nbr + 48);
	else
	{
		ft_putunnbr(nbr / 10);
		ft_putunnbr(nbr % 10);
	}
}

int	ft_print_unnbr(unsigned int nbr)
{
	ft_putunnbr(nbr);
	return (ft_len(nbr));
}
