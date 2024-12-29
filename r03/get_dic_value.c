/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dic_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:07:44 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/13 16:07:44 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char str)
{
	int	res;

	res += str - '0';
	return (res);
}

void	get_dic_value(char nbr)
{
	int		index;
	int		fd;
	int		bytes_read;
	char	buffer[10240];
	char	*m_arr;

	fd = open("numbers.dict", O_RDONLY);
	index = ft_atoi(nbr);
	bytes_read = read(fd, buffer, sizeof(buffer));
	m_arr = malloc(bytes_read * sizeof(char));
}
