/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:36:22 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/07 04:36:22 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power - 1)
	{
		nb *= tmp;
		i++;
	}
	return (nb);
}

/*
int	main(void)
{
	#include <stdio.h>
	printf("%d", ft_iterative_power(-5, 3));
	return (0);
}*/
