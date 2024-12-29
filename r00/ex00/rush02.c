/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:35:19 by gfulconi          #+#    #+#             */
/*   Updated: 2024/06/30 20:47:59 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_errors(int size_x, int size_y)
{
	if (size_x < 0 || size_y < 0)
	{
		write(1, "Error : negative input\n", 23);
		return (1);
	}
	if (size_x > 10000 || size_y > 10000)
	{
		write(1, "Error : input too high\n", 23);
		return (1);
	}
	return (0);
}

void	print_line(int size_x, char side_char, char middle_char)
{
	int	x;

	x = 0;
	while (x < size_x)
	{
		if (x == 0 || x == size_x - 1)
			ft_putchar(side_char);
		else
			ft_putchar(middle_char);
		x++;
	}
	ft_putchar('\n');
}

void	rush(int size_x, int size_y)
{
	int	y;

	if (check_errors(size_x, size_y))
		return ;
	y = 0;
	while (y < size_y)
	{
		if (y == 0)
			print_line(size_x, 'A', 'B');
		else
		{
			if (y == size_y - 1)
				print_line(size_x, 'C', 'B');
			else
				print_line(size_x, 'B', ' ');
		}
		y++;
	}
}
