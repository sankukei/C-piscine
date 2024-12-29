/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:29:54 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/13 17:29:54 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	find_size(char *str, char *sep);
/*int	ft_strlen(char *str, char *sep)
{
	int	i;
	int	y;
	int	count;
}*/

int	*is_charset(char *str, char *sep)
{
	int	i;
	int	y;
	int	l;
	int	j;
	int	*sizes;

	i = 0;
	y = 0;
	l = 0;
	j = 0;
	sizes = malloc(find_size(str, sep) * sizeof(int));
	while (str[i])
	{
		while (sep[y])
		{
			if (str[i] != sep[y])
				j++;
			if (str[i] == sep[y])
			{
				if (l != 0)
					sizes[l] = i - (j - l);
				else
					sizes[l] = j;
				l++;
			}
			y++;
		}
		y = 0;
		i++;
	}
	return (sizes);
}

int	find_size(char *str, char *sep)
{
	int	i;
	int	y;
	int	count;
	int	boul;

	i = 0;
	y = 0;
	count = 0;
	boul = 0;
	while (str[i])
	{
		while (sep[y])
		{
			if (str[i] == sep[y])
				boul = 1;
			y++;
		}
		if (boul == 1)
			count++;
		y = 0;
		boul = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *sep)
{
	char	**res;
	int		count;
	int		i;
	int		*sizes;

	sizes = is_charset(str, sep);
	count = find_size(str, sep);
	res = malloc(find_size(str, sep) * sizeof(char *));
	i = 0;
	while (res[i])
	{
		res[i] = malloc(sizes[i] * sizeof(char));
		i++;
	}
	return (res);
}

int	main(void)
{
	ft_split("le,le,le,le,le,le,le", ",");
	return (0);
}
