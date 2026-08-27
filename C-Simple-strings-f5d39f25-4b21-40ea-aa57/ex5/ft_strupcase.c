/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 08:11:24 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/12 05:07:27 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	if ('a' <= *str && *str <= 'z')
		*str -= 32;
	if (*str != '\0')
		ft_strupcase(str + 1);
	return (str);
}
/*
void main (){
	char str[] = "abcdef11gh";
	ft_strupcase(str);
	printf(str);
}
*/
