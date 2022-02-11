/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:22:55 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 17:45:28 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(int num)
{
	char	hex[3];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = '\\';
	if (num < 16)
	{
		hex[1] = '0';
		hex[2] = base[num % 16];
	}
	else
	{
		hex[1] = base[num / 16];
		hex[2] = base[num % 16];
	}
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) < 32 || *(str + i) > 126)
			ft_puthex(*(str + i));
		else
			write(1, (str + i), 1);
		i++;
	}
}
