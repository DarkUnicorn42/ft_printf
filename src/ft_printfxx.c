/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfxx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:58:47 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/16 15:09:06 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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

static int	ft_printfxl(unsigned int c)
{
	int			i;
	int			len;
	char		*str;
	const char	*strl;

	strl = "0123456789abcdef";
	len = ft_hex_len(c);
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (str == NULL)
		return (0);
	i = len -1;
	while (i >= 0)
	{
		str[i--] = strl[c % 16];
		c /= 16;
	}
	str[len] = '\0';
	write(1, str, len);
	return (len);
}

static int	ft_printfxu(unsigned int c)
{
	int			i;
	int			len;
	char		*str;
	const char	*stru;

	stru = "0123456789ABCDEF";
	len = ft_hex_len(c);
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (str == NULL)
		return (0);
	i = len -1;
	while (i >= 0)
	{
		str[i--] = stru[c % 16];
		c /= 16;
	}
	str[len] = '\0';
	write(1, str, len);
	return (len);
}

int	ft_printfxx(unsigned int c, const char *f)
{
	int	len;

	len = ft_hex_len(c);
	if (*f == 'x')
		ft_printfxl(c);
	if (*f == 'X')
		ft_printfxu(c);
	return (len);
}
