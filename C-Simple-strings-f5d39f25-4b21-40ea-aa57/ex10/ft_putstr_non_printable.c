/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 03:05:01 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/17 16:38:31 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[(c / 16) % 16], 1);
	write(1, &base[(c % 16)], 1);
}

void	ft_putstr_non_printable(char *str)
{
	if (*str != '\0')
	{
		if (32 <= *str && *str <= 126)
			write(1, &*str, 1);
		else
			ft_hex(*str);
		ft_putstr_non_printable(str + 1);
	}
}
/*
void main() {
	ft_putstr_non_printable("Hello\nHow are you ?");
}
*/
