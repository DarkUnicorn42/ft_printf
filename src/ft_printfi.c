/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:27:24 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/13 16:47:10 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_printfi(int n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_itoa(n);
	while (i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
