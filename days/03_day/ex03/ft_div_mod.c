/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:41:36 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/10 16:22:41 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int t;
	int rem;

	t =  a / b;
	rem  = a % b;

	*div = t;
	*mod = rem;
}

int		main(void)
{
	int c;
	int d;

	scanf("%d%d", &c, &d);

	int a = c;
	int b = d;

	ft_div_mod(a, b, &c, &d);

	printf("integer = %d, remainder = %d", c, d);
	return(0);
}
