/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:24:56 by leothoma          #+#    #+#             */
/*   Updated: 2024/06/25 17:35:15 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main()
{
	ft_putchar('c');
	ft_putchar('o');
	ft_putchar('u');
	ft_putchar('c');
	ft_putchar('o');
	ft_putchar('u');
	return 0;
}
*/
