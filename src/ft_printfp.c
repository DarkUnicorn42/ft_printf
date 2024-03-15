/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:27:28 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/15 15:34:16 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
/*
int	ft_printfp(void *p)
{
	char	*tmp;
	int		counter;

	if (p == 0)
		return (0);
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
*/
static int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

int	ft_printfp(unsigned long long c)
{
	int			i;
	int			len;
	char		*str;
	const char	*strl;

	if (!c)
		return (0);
	i = 0;
	len = ft_hex_len(c);
	strl = "0123456789abcdef";
	str = (char *)malloc((sizeof(char) * (len + 3)));
	if (str == NULL)
		return (0);
	i = len + 1;
	while (i >= 2)
	{
		str[i--] = strl[c % 16];
		c /= 16;
	}
	str[0] = '0';
	str[1] = 'x';
	str[len + 2] = '\0';
	write(1, str, len + 2);
	free(str);
	return (len + 2);
}