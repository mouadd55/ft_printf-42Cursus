/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:28:18 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/15 13:46:03 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_hexa(unsigned int nbr)
{
	int	length;

	length = 0;
	if (nbr == 0)
		length++;
	while (nbr != 0)
	{
		length++;
		nbr /= 16;
	}
	return (length);
}

char	check_format(char *str, int i, int j, char format)
{
	if (format == 'x')
		str[i] = j + 87;
	else if (format == 'X')
		str[i] = j + 55;
	return (str[i]);
}

void	ft_puthexa(unsigned int nbr, char format)
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
			check_format(str, i, j, format);
		nbr /= 16;
		i++;
	}
	j = i;
	while (j-- > 0)
		write (1, &str[j], 1);
}

int	ft_print_hexa(unsigned int nbr, char format)
{
	ft_puthexa(nbr, format);
	return (ft_length_hexa(nbr));
}
