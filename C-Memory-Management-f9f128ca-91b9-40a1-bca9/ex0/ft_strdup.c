/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 03:14:17 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/26 05:34:09 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	if (!src)
		return (NULL);
	str = malloc(ft_strlen(src) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (str);
}
/*
void	main (){
	char *str = ft_strdup("nanananana");
	printf(str);
}
*/
