/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:28:18 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/17 02:25:42 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	check_format(int ch, char format)
{
	if (format == 'x')
		ch += 87;
	else if (format == 'X')
		ch += 55;
	return (ch);
}

int	ft_puthexa(unsigned int nbr, char format)
{
	char			str[8];
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
			str[i] = check_format((nbr % 16), format);
		nbr /= 16;
		i++;
	}
	while (i--)
		length += write (1, &str[i], 1);
	return (length);
}

int	ft_print_hexa(unsigned int nbr, char format)
{
	return (ft_puthexa(nbr, format));
}
