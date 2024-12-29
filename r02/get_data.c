/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:37:12 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/06 16:37:12 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error_handling(int ac)
{
	//if (ac == 0)
	//	start();
	if (ac == 1)
		write(1, "Invalid argument count", 22);
	if (ac == 2)
		write(1, "wrong data type", 15);
	if (ac == 3)
		write(1, "Invalid input", 13);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '4')
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{	
		error_handling(1);
		return (1);
	}
	while(av[1][i])
	{
		if (av[1][i] != 32 && is_numeric(av[1][i]) == 0)
		{
			error_handling(2);
			return (1);
		}
		if (i > 31)
		{
			error_handling(3);
			return (1);
		}
		i++;
	}
	return (0);
}
