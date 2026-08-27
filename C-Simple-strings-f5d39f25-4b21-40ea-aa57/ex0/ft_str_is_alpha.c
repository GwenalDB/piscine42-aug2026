/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:26:01 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/17 16:46:27 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	return (
		*str == '\0'
		|| ((('a' <= *str && *str <= 'z')
				|| ('A' <= *str && *str <= 'Z')) && ft_str_is_alpha(str + 1)));
}
/*
void	main()
{
	printf("%d \n", ft_str_is_alpha("aa0a"));
	printf("%d \n", ft_str_is_alpha("aa0a"));
}
*/
