/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 23:58:46 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/10 17:09:16 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = t;
		i++;
	}
}
/*
void main() {
	int tab[5] = {-45, -46, -47, -48, -49};
	int size = 5;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < 5; i++)
		printf("%d", tab[i]);
}
*/
