/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:12:50 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/11 19:39:02 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iteractive_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if ((nb <= 0) || (nb >= 12))
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int		main(void)
{
	int nb;

	scanf("%d", &nb);
	printf("The Factorial of %d is %d", nb, ft_iteractive_factorial(nb));
	return (0);
}
