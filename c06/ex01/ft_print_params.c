/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 01:45:00 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/08 01:45:00 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	y;
	int	norminette;

	norminette = ac;
	norminette++;
	i = 1;
	y = 0;
	while (av[i])
	{
		while (av[i][y])
		{
			write(1, &av[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		y = 0;
		i++;
	}
	return (0);
}
