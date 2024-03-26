/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:30 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/22 16:23:54 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_printfstr(const char *c, int *len)
{
	size_t	i;

	if (c == 0)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	i = 0;
	while (c[i] != '\0')
	{
		ft_printfc(c[i], len);
		i++;
	}
}
