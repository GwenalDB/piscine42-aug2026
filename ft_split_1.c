/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:32:56 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/26 01:56:54 by gdelpech         ###   ########.fr       */
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

int	check(char *str, char *charset)
{
	int	v;
	int	i;
	int	j;

	i = 0;
	while (len(str + i) >= len(charset))
        {
		j = 0;
		v = 1;
		while (charset[j] != '\0')
		{
			if (charset[j] == str[i + j])
			       	v = v && 1;
			else
				v = 0;
			j++;
		}
		if (v)
			return (i);
		i++;
	}
	return (-1);
}

int	count(char *str, char *charset)
{
	if (check(str, charset) < 0)
		return (1);
	return (1 + count(str + 1 + check(str, charset), charset));
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		c;
	char	**t;
	
	t = malloc(sizeof(char *) * (count(str, charset) + 1));
	i = 0;
       	while (i <= len(str))
	{
		j = 0;
		c = check(str + i, charset);
		t[count(str, charset) - count(str + i, charset)] = malloc(c + 1);
		while (j < c || (c == -1 && str[i + j] != '\0'))
		{
		 	t[count(str, charset) - count(str + i, charset)][j] = *(str + i + j);
			j++;
		}
		t[count(str, charset) - count(str + i, charset)][j] = '\0';
		i += check(str, charset) + len(charset);
		printf(t[i]);
	}
	t[count(str, charset) + 1] = "NULL";
	return (t);
}

int main()
{
	char *str = "qqqaazzzawww";
	char *charset = "a";
	for (int i = 0; i < 4; i++)
		printf(ft_split(str, charset)[i]);
	return (0);
}

