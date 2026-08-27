/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 11:40:43 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/26 19:17:03 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

long	base_to_dec(char *nbr, char *base);
long	ex(int i, int p);

int	ft_strlen(char *str, char *base)
{
	int		len;
	long	nbr;

	if (base[1] == '\0')
	{
		if (*str == '\0')
			return (0);
		return (1 + ft_strlen(str + 1, "-"));
	}
	else
	{
		len = 0;
		if (*str == '0' && str[1] == '\0')
			return (0);
		nbr = base_to_dec(str, base);
		while (nbr > 0)
		{
			nbr /= ft_strlen(base, "-");
			len++;
		}
		return (len);
	}
}

long	base_to_dec(char *nbr, char *base)
{
	int	len_base;
	int	len_nbr;
	int	i;

	len_base = ft_strlen(base, "-");
	len_nbr = ft_strlen(nbr, "-");
	i = 0;
	while (i < len_base)
	{
		if (base[i] == *nbr)
			return (i * ex(len_base, len_nbr - 1) + base_to_dec(nbr + 1, base));
		i++;
	}
	return (0);
}

void	dec_to_base(long nbr, char *base, char *final, int *index)
{
	int	len_base;

	len_base = ft_strlen(base, "-");
	if (nbr >= len_base)
		dec_to_base(nbr / len_base, base, final, index);
	final[*index] = base[nbr % len_base];
	(*index)++;
	final[*index] = '\0';
}

int	error(char *b, char *nbr)
{
	int (i) = 0;
	int (j) = 0;
	int (t) = 1;
	if (ft_strlen(b, "-") < 2)
		return (1);
	while (b[i] != '\0')
	{
		if (*nbr != '\0' && b[i] == *nbr)
			t = 0;
		j = i + 1;
		while (b[j] != '\0')
		{
			if ((b[i] == b[j] || b[i] == '-') || b[i] == '+')
				return (1);
			j++;
		}
		i++;
	}
	if (*nbr != '\0')
		return (t || error(b, nbr + 1));
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		index;
	long	dec;
	char	*res;

	index = 0;
	nbr += (*nbr == '+');
	if (*nbr == '-')
		index = 1;
	if (error(base_from, nbr + index) || error(base_to, "\0"))
		return (NULL);
	res = malloc(sizeof(char) * 1000);
	if (*nbr == '-')
		res[0] = *nbr;
	dec = base_to_dec(nbr + index, base_from);
	dec_to_base(dec, base_to, res, &index);
	return (res);
}
/*
int main () {
	printf(ft_convert_base("2147483647", "0123456789", "01"));
	return 0;
}
*/
