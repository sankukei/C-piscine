/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkrules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:55:50 by ipascal           #+#    #+#             */
/*   Updated: 2024/07/06 21:00:40 by ipascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	number_exist(/*char **matrice*/)
{
	char    matrice[6][6] = {       {'0', '0', '8', '0', '0', '0'},
                                        {'0', '0', '7', '0', '0', '0'},
                                        {'0', '2', '2', '0', '0', '0'},
                                        {'0', '0', '0', '0', '0', '0'},
                                        {'0', '0', '0', '0', '0', '0'},
                                        {'0', '0', '0', '0', '0', '0'},
                                };
        int     j;
        int     n;
        int     x;
        int     y;
        char    number;
        int     nb_found;

        nb_found = 0;
        number = '2';
        n = 1;
        j = 2;
        x = 1;
        y = 2;
	while (j < 5)
        {
                if (matrice[y][j] == number)
                {
                        nb_found++;
                }
                if (nb_found > 1)
                {
                        printf("meme nb sur la ligne \n");
                        return (0);
                }
                j++;
        }
        while (n < 5)
        {
                if (matrice[n][x] == number)
                {
                        nb_found++;
                }
                if (nb_found > 1)
                {
                        printf("meme nb sur la colonne \n");
                        return (0);
                }
                n++;
        }
        printf("nombre present qu'une fois");
}

int	ft_checkrules(/*char **matrice, char av*/)
{
	
	if (!number_exist(matrice))
	{
		return (0);
	}
	/*******check si on est sur un bord et si le nb soummis par le backtracking correspond aux conditions suivantes*******/
	/*if (x == 0 || y == 0 || x == 3 || y == 3)
        {
                if ((av[1][x] == 1) && (c == 4)) 
                        return (1);
                else if ((av[1][x] == 2) && ((c == 1) || (c == 2) || (c == 3))) 
                        return (1)
                else if ((av[1][x] == 3) && ((c == 1) || (c == 2)) 
                        return (1)
                else if ((av[1][x] == 4) && ((c == 1))
	}*/
	return (1);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)**av;
	ft_checkrules(/*matrice*/);
}


/************************afficher matrice***********************/
/*int     x_pos;
        int     y_pos;
        int     size;

        size = 4;
        y_pos = 0;
        while (y_pos < size)
        {
                x_pos = 0;
                while (x_pos < size)
                {
                        ft_checkpos(argv, x_pos);
                        x_pos++;
                }
                write(1, "\n", 2);
                y_pos++;
        }
        y_pos++;*/
