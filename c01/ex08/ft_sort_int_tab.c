/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:02:46 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/01 03:48:44 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int i, int *str)
{
	int	buff;

	buff = str[i + 1];
	str[i + 1] = str[i];
	str[i] = buff;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(i, tab);
				sorted = 0;
			}
			i++;
		}
	}
}
