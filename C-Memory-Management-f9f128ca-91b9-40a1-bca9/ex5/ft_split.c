/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 01:46:01 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/27 07:04:48 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + len(str + 1));
}

int	is_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == *str)
			return (1);
		i++;
	}
	return (0);
}

char	*get_word(char *str, char *charset, int n)
{
	int		i;
	char	*w;

	if (*str == '\0')
		return (NULL);
	i = 0;
	while (!is_sep(str + i, charset) && str[i] != '\0')
		i++;
	if (n > 0)
	{
		if (str[i] == '\0')
			return (NULL);
		while (is_sep(str + i, charset))
			i++;
		return (get_word(str + i, charset, n - 1));
	}
	w = malloc(sizeof(char *) * (i + 1));
	w[i] = '\0';
	while (i > 0)
	{
		i--;
		w[i] = str[i];
	}
	return (w);
}

int	count(char *str, char *charset)
{
	int	i;
	int	n;

	i = 0;
	n = (*str != '\0');
	while (str[i] != '\0')
	{
		if (is_sep(str + i, charset))
		{
			while (is_sep(str + i, charset))
				i++;
			n++;
		}
		else
			i++;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	while (is_sep(str + i, charset))
		i++;
	str += i;
	tab = malloc(sizeof(char *) * (count(str, charset) + 1));
	tab[0] = get_word(str, charset, 0);
	i = 1;
	while (tab[i - 1] != NULL)
	{
		tab[i] = get_word(str, charset, i);
		i++;
	}
	return (tab);
}
/*
int main() {
	for (int i = 0; i < 3; i++)
		printf("%s \n", ft_split("aaaaazzbbbbbzzccccc", "z")[i]);
	return (0);
}
*/
