/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:43:41 by agouin            #+#    #+#             */
/*   Updated: 2024/07/13 19:30:13 by agouin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include "is_positive_number.c"

int	main(int argc, char **argv)
{
	is_positive_number(*argv);
	if (argc != 2 && argc != 3)
	{
		write(1, "Error", 5);
		return (1);
	}
	if (argc == 2)
	{
		if (is_positive_number(argv[1]) == 0)
		{
			write(1, "Error", 5);
			return (1);
		}
	}
	if (argc == 3)
	{
		if (is_positive_number(argv[2]) == 0)
		{
			write(1, "Error", 5);
			return (1);
		}
	}
	return (0);
}
