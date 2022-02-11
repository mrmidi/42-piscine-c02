/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:51:00 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 17:45:28 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha_or_num(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| ((c >= '0') && (c <= '9')))
		return (1);
	return (0);
}

void	ft_char_to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	ft_char_to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	to_upper;

	i = 0;
	to_upper = 1;
	while (*(str + i) != '\0')
	{
		if (ft_char_is_alpha_or_num(*(str + i)))
		{
			if (to_upper)
			{
				ft_char_to_upper((str + i));
				to_upper = 0;
			}
			else
				ft_char_to_lower((str + i));
		}
		else
		{
			to_upper = 1;
		}
		i++;
	}
	return (str);
}
