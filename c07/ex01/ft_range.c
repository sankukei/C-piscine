/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:56:43 by leothoma          #+#    #+#             */
/*   Updated: 2024/07/09 09:56:43 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*maxitab;
	int	size;

	if (min >= max)
		return (NULL);
	size = (max - min);
	maxitab = malloc(size * sizeof(int));
	if (!maxitab)
		return (NULL);
	while (min < max)
		*maxitab = min++;
	return (maxitab);
}
