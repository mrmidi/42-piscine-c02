/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:22:08 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 17:45:28 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				is_shorter;
	char			c;

	is_shorter = 0;
	i = 0;
	c = *(src + i);
	while (i < n)
	{
		if (*(src + i) == '\0')
			is_shorter = 1;
		if (is_shorter)
			c = '\0';
		else
			c = *(src + i);
		*(dest + i) = c;
		i++;
	}
	return (dest);
}
