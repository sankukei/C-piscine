/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_positive_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:59:52 by agouin            #+#    #+#             */
/*   Updated: 2024/07/13 19:14:46 by agouin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_positive_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
