/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:30:24 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/12 00:30:24 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = (max - min);
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	*range = arr;
	while (min < max)
		*arr++ = min++;
	return (size);
}
/*
int    main(void)
{
#include <stdio.h>
    int    min = 5;
    int max = 11;
    int *range;

    int size = ft_ultimate_range(&range, min, max);

    if(size == -1)
    {
        printf("oops\n");
        return (1);
    }
    else if(size == 0)
    {
        printf("invalid range size\n");
        return (1);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", range[i]);
    }
    free(range);
    return (0);
}*/
