/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 22:56:15 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/10 23:07:13 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
int		main()
{
   	int a;
	int b;
	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a,&b);
	printf("%d,%d", a, b);
	return (0);
}
