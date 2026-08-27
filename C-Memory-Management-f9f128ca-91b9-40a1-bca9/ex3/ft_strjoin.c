/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 06:35:19 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/20 03:15:26 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

int	len_strs(char **strs, int size)
{
	if (strs == NULL || size == 0)
		return (0);
	return (ft_strlen(strs[0]) + len_strs(strs + 1, size - 1));
}

void	ft_sep(char *sort, char *sep, int *k)
{
	int	j;

	j = 0;
	while (j < ft_strlen(sep))
	{
		sort[(*k)++] = sep[j];
		j++;
	}
}

char	*errorz(void)
{
	char	*sort;

	sort = malloc(1 * sizeof(char));
	if (sort == NULL)
		return (NULL);
	sort[0] = '\0';
	return (sort);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sort;
	int		i;
	int		j;
	int		k;

	if (size <= 0)
		return (errorz());
	i = (len_strs(strs, size) + (size - 1) * ft_strlen(sep) + 1) * sizeof(char);
	sort = malloc(i);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			sort[k++] = strs[i][j];
			j++;
		}
		if (i < size - 1)
			ft_sep(sort, sep, &k);
		i++;
	}
	sort[k] = '\0';
	return (sort);
}
/*
#include <stdio.h>

int main()
{
	char *strs[] = {"00", "111"};
        char *res;
	res = ft_strjoin(2, strs, " - ");
	if (res)
	{
		printf("Résultat du join : %s\n", res);
	}
	return (0);
}
*/
