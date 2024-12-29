/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 03:17:49 by leothoma          #+#    #+#             */
/*   Updated: 2024/06/27 16:54:36 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			b++;
		}
	b = '0';
	a++;
	}
}

int main()
{	
	ft_print_comb2();
	return 0;
}		
