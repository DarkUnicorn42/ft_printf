/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:52:15 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/23 18:13:29 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
void	ft_printfp(unsigned long int c, int *len);
void	ft_printfc(char c, int *len);
void	ft_printfi(int n, int *len);
void	ft_printfxx(unsigned int c, const char f, int *len);
void	ft_printfstr(const char *c, int *len);
void	ft_printfu(unsigned int n, int *len);
int		ft_printf(const char *f, ...);

#endif
