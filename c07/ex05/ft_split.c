/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:17:27 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/16 17:17:27 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_charset(char c, char *charset);
int		flen(char *str, char *charset);
char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *str, int start, int end);
char	**create_arr(char *str, char *charset, char **res);

int	flen(char *str, char *charset)
{
	int		count;
	char	*ptr;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		while (is_charset(*ptr, charset) && *str)
			ptr++;
		if (*ptr)
		{
			count++;
			while (!is_charset(*ptr, charset))
				ptr++;
		}
	}
	return (count);
}

int	is_charset(char c, char *charset)
{
	char	*ptr;

	ptr = charset;
	while (*ptr)
	{
		if (*ptr == c)
			return (1);
		ptr++;
	}
	return (0);
}

char	**create_arr(char *str, char *charset, char **res)
{
	int	i;
	int	y;
	int	bol;
	int	start;

	i = -1;
	start = 0;
	bol = 0;
	while (str[++i])
	{		
		while (is_charset(str[i], charset))
			i++;
		if (is_charset(str[i], charset))
		{
			res[i] = ft_strdup(str, start, i);
			bol = 1;
		}
		if (bol == 1)
		{
			start = i;
			bol = 0;
		}
	}
	return (res);
}

char	*ft_strdup(char *str, int start, int end)
{
	int		i;
	char	*ptr;
	char	*res;

	i = 0;
	res = malloc((end - start) * sizeof(char));
	ptr = res;
	while (str[start] && start != end)
	{
		*ptr++ = str[start];
		start++;
	}
	return res;
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int	len;

	len = flen(str, charset);
	printf("%d", len);
	res = malloc(len * sizeof(char *));
	res = create_arr(str, charset, res);
	if (!res)
		return (NULL);
	return (res);
}

int	main(void)
{
	char	**tab;
	char	*str = "a!!!b!!!c!!!";
	char	*charset = "!";
	tab = ft_split(str, charset);
	int 	i = 0;
	printf("%s", tab[0]);
	printf("%s", tab[1]);
	printf("%s", tab[2]);
	return (0);
}
