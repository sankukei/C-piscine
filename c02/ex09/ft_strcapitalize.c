/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:17:23 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/04 02:44:22 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	xd(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	check(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && is_alpha(str[i]) == 1)
			str[i] = str[i] - 32;
		if (i > 0 && check(str[i - 1]) == 0 && is_alpha(str[i]) == 1
			&& xd(str[i - 1]) == 0)
		{
			str[i] = str[i] - 32;
		}
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, cOMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
