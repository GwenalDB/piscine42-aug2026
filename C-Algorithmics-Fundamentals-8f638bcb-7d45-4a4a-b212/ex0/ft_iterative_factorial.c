/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 22:29:09 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/05 23:47:06 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		c *= nb - 1;
		nb--;
	}
	return (c);
}
