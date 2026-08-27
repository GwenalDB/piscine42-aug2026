/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 08:33:02 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/12 05:09:07 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_minus(char *str)
{
	if ('A' <= *str && *str <= 'Z')
		*str += 32;
	if (*str != '\0')
		ft_minus(str + 1);
}

void	ft_majus(char *str)
{
	if ('a' <= *(str + 1) && *(str + 1) < 'z'
		&& !(('0' <= *str && *str <= '9')
			|| ('a' <= *str && *str <= 'z')
			|| ('A' <= *str && *str <= 'Z')))
		*(str + 1) -= 32;
	if (*str != '\0')
		ft_majus(str + 1);
}

char	*ft_strcapitalize(char *str)
{
	ft_minus(str);
	if ('a' <= *str && *str <= 'z')
		*str -= 32;
	ft_majus(str);
	return (str);
}
/*
void main (){
	char str[] = "hello, hOw are you dOing? 42woRds forty-tWo; fifty+and+oNe";
	printf(ft_strcapitalize(str));
}
*/
