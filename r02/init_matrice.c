/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:22:39 by liperez           #+#    #+#             */
/*   Updated: 2024/07/06 18:57:12 by liperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*init_matrice(int x, int y)
{
	int	i;
	int	j;
	char **matrice = malloc(6 * 1);
	
	i = 0;
	j = 0;
	while (i < 6)
	{
		matrice[i] = malloc(6 * 1);
		while(j < 6)
		{
			matrice[i][j] = '0';
//			write (1, &matrice[i][j], 2);
			j++;
		}
//		write (1, "\n", 1);
		j = 0;
		i++;
	}
	return matrice;
}

