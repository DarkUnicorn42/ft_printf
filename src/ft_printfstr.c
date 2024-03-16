/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:30 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/16 15:41:26 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printfstr(const char *c)
{
	size_t	i;
	size_t	len;

	if (c == 0)
		return (write(1, "(null)", 6));
	len = ft_strlen(c);
	i = 0;
	while (i < len)
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
