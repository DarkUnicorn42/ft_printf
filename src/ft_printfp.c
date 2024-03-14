/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:27:28 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/13 16:47:14 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_printfp(void *p)
{
	char	*tmp;
	int		counter;

	counter = 0;
	tmp = (char *)p;
	while (*tmp != '\0')
	{
		write(1, tmp, 1);
		tmp++;
		counter++;
	}
	return (counter);
}
