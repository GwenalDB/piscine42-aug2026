/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 07:07:47 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/12 08:40:17 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
/*
void main () {
	ft_putstr("ASgfjmdbmfkfkfpdo");
}
*/
