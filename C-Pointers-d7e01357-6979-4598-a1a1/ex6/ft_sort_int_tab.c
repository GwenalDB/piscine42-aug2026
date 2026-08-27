/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 03:22:17 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/10 17:06:53 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	min_tab(int *tab, int i, int size)
{
	int	min;

	min = i;
	while (i < size)
	{
		if (tab[i] < tab[min])
			min = i;
		i++;
	}
	return (min);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	t;

	i = 0;
	while (i < size)
	{
		min = min_tab(tab, i, size);
		t = tab[min];
		tab[min] = tab[i];
		tab[i] = t;
		i++;
	}
}
/*
void main() {
        int tab[5] = {25, -26, -27, -28, -29};
        ft_sort_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
                printf("%d \n", tab[i]);
}
*/
