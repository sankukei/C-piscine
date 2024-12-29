/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:38:46 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/04 04:01:30 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	int		i;
	int		y;
	int		l;

	i = 0;
	l = 0;
	y = 0;
	needle = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		l = i;
		while (to_find[y] && str[l] == to_find[y])
		{
			if (y == ft_strlen(to_find) - 1)
				return (needle = &str[i]);
			l++;
			y++;
		}
		y = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string[] = "";
	char	xd[] = "qwqqqqqqqq";
	char	*str = ft_strstr(string, xd);
	printf("%s", str);
	return (0);
}*/
