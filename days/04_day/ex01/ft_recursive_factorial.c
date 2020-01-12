/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:54:39 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/11 19:38:10 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	if ((nb <= 0) || (nb >= 12))
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

int		main(void)
{
	int nb;

	scanf("%d", &nb);
	printf("The Factorial of %d is %d", nb, ft_recursive_factorial(nb));
	return (0);
}
