/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 07:00:24 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/18 06:05:53 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
