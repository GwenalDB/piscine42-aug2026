/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 05:09:32 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/09 21:52:03 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;

	if (power < 0)
		return (0);
	c = 1;
	while (power > 0)
	{
		c *= nb;
		power--;
	}
	return (c);
}
