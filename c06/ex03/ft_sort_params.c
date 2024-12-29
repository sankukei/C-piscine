/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:23:11 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/11 02:23:11 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	display(char **av)
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	while (av[i])
	{
		while (av[i][y])
		{
			write(1, &av[i][y], 1);
			y++;
		}
		write (1, "\n", 1);
		y = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*buff;
	int		sorted;
	int		i;

	ac++;
	i = 1;
	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		while (av[i] && av[i + 1])
		{
			if (ft_strncmp(av[i], av[i + 1]) > 0)
			{
				buff = av[i];
				av[i] = av[i + 1];
				av[i + 1] = buff;
				sorted = 0;
			}
			i++;
		}
		i = 1;
	}
	display(av);
	return (0);
}
