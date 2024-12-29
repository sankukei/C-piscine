/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:31:45 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/01 03:50:00 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	len;
	int	tmp;

	i = 0;
	len = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[len];
		tab[len] = tmp;
		i++;
		len--;
	}
}
