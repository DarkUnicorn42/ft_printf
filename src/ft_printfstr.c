/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:30 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/13 16:47:17 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	ft_printfstr(const char *c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(c);
	i = 0;
	while (i < len)
	{
		write(1, &c[i], 1);
		i++;
	}
	return (1);
}
