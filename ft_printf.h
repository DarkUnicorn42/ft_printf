/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:52:15 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/16 17:26:00 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printfp(unsigned long long c);
int		ft_printf(const char *f, ...);
int		ft_printfc(int c, const char *f);
int		ft_printfi(int n);
int		ft_printfxx(unsigned int c, const char *f);
int		ft_printfstr(const char *c);
int		ft_printfu(unsigned int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
void	test_simple(void);
void	test_percent(void);
void	test_c(void);
void	test_s(void);
void	test_d(void);
void	test_i(void);
void	test_x(void);
void	test_X(void);
void	test_u(void);
void	test_p(void);
void	test_all(void);

#endif