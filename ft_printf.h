/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:49:05 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/15 13:43:11 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_print_hexa(unsigned int nbr, char format);
int		ft_print_char(char c);
int		ft_print_dec(int nbr);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long ptr);
int		ft_printunnbr(unsigned int nbr);

#endif
