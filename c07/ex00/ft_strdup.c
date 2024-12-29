/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 07:47:42 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/09 07:47:42 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		lenstr;
	int		i;

	i = 0;
	lenstr = len(src);
	new = malloc((lenstr + 1) * sizeof(char));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}
/*
int main(void)
{

	//printf("%s", ft_strdup("aya"));
	char *xd = ft_strdup("aya");
	int	i;
	i = 0;
	while(xd[i])
	{
		printf("%c", xd[i]);
		i++;
	}
	return (0);

}*/
