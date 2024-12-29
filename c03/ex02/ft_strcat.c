/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 02:40:17 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/03 21:08:05 by leothoma         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char	dest[100] = "bonjourles";
	char	src[10] = "amis";
	char	dest1[100] = "bonjourles";
	char	src1[10] = "amis";

	printf("%s", ft_strcat(dest, src));
	printf("\n");
	printf("%s", strcat(dest1, src1));

}*/
