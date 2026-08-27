/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:11:36 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/07 01:55:00 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affiche(char u)
{
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				affiche('0' + a);
				affiche('0' + b);
				affiche('0' + c);
				if (a != 7 || b != 8 || c != 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
