/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:47:09 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/07 15:47:09 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_matrice.c"
#include <stdio.h>

int	number_exist(char **matrice, int x, int y, char number)
{
        int     j;
        int     n;
//     	x;	col
//     	y;	row
        int     nb_found;

        nb_found = 0;
        n = 1;
        j = 1;
	while (j < 5)
        {
                if (matrice[j][y] == number)
                        nb_found++;
                j++;
        }
        while (n < 5)
        {
                if (matrice[x][n] == number)
                        nb_found++;
                n++;
        }
	if (nb_found == 0)
		return (0);
	else 
		return (1);
}

void	init(char **matrice)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (matrice[i])
	{
		while (matrice[i][y])
		{
			if ()
			y++;
		}
		i++;
	}

}

int	solver(void)
{

	char	**matt = init_matrice(6, 6);
	int	i;
	int	y;
	char	number;
	i = 1;
	y = 1;
	while(i < 5)
	{
		while (y < 5)
		{
			printf("%c", matt[i][y]);
			y++;
		}
		printf("\n");
		y = 1;
		i++;
	}
	printf("\n");
	i = 1;
	y = 1;
	while(i < 5)
	{
		while (y < 5)
		{
			number = '1';
			while (number_exist(matt, i, y, number) == 1)
			{
				if(number == '4' && number_exist(matt, i, y, number) == 1)
				{
					write(1, "Could not solve puzzle", 22);
					return (2);
				}
				number++;
			}
			matt[i][y] = number;
			printf("%c", matt[i][y]);
			y++;
		}
		printf("\n");
		y = 1;
		i++;
	}
	return (0);
}

int main(void)
{
	solver();
	return (0);
}
