/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 04:20:47 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/09 09:19:47 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affiche(char u)
{
	write(1, &u, 1);
}

void	affiche2(int a, int b, char c)
{
	affiche('0' + a);
	affiche('0' + b);
	if (c != ' ' && c != 'a')
		affiche(c);
	if (c != 'a')
		affiche(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				affiche2(a / 10, a % 10, ' ');
				if (a == 98 && b == 99)
					affiche2(b / 10, b % 10, 'a');
				else
					affiche2(b / 10, b % 10, ',');
			}
			b++;
		}
		a++;
	}
}
