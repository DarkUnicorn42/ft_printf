/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:52:15 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/15 14:28:27 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printfp(unsigned long long c);
int		ft_printf(const char *f, ...);
int		ft_printfc(int c);
int		ft_printfi(int n);
int		ft_printfxx(unsigned int c, const char *f);
char	*ft_itoa(int n);
char	ft_printfstr(const char *c);
size_t	ft_strlen(const char *str);

#endif