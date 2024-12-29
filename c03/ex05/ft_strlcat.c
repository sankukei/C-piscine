/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 03:51:38 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/04 05:12:31 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

	unsigned int	i;
	unsigned int	len;
	unsigned int	srclen;

	i = 0;
	len = ft_strlen(dest);
	if (size <= len)
		return (size + ft_strlen(src));
	while(src[i] || i < size)
	{
		dest[len + i] = src[i];
		i++;
		len++;
	}
	dest[len + i] = '\0';
	return (len + ft_strlen(src));
}
int	main()
{
	char	dest[100] = "amis";
	char	src[] = "hello les";
	printf("%d",ft_strlcat(dest, src, 5));
	return (0);
}
