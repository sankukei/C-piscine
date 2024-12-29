/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:04:44 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/03 21:33:04 by leothoma         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < nb && src[i])
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

	printf("%s", ft_strncat(dest, src, 1));
	printf("\n");
	printf("%s", strncat(dest1, src1, 1));

}*/
