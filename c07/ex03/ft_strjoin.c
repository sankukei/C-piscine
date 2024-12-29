/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 01:48:52 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/12 01:48:52 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	len(int size, char **str)
{
	int	i;
	int	y;
	int	res;

	i = 0;
	y = 0;
	res = 0;
	while (i < size)
	{
		while (str[i][y])
			y++;
		res += y;
		y = 0;
		i++;
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src)
		*ptr++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		flen;
	int		lsep;

	if (size == 0)
		return (res = "");
	lsep = (ft_strlen(sep) * size - 1);
	flen = len(size, strs) + lsep;
	i = 0;
	res = malloc(flen * sizeof(char));
	if (!res)
		return (res = NULL);
	while (i < size)
	{
		if (ft_strlen(strs[i]) != 0)
			ft_strcat(res, strs[i]);
		if (i != size - 1 && ft_strlen(strs[i]) != 0)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

int	main(void)
{	
#include <stdio.h>
	char	*test[] = {"hello", "les", "amis"};
	char *sep = "000";

	printf("%s", ft_strjoin(3, test, sep));
	return (0);
}
