/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelpech <gdelpech@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 23:38:04 by gdelpech          #+#    #+#             */
/*   Updated: 2026/08/10 17:10:27 by gdelpech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void main(){
        int a = 42;
        int b = -42;
	int div;
	int mod;
        ft_div_mod(a, b, &div, &mod);
        printf("%d", div);
        printf("%d", mod);
}
*/
