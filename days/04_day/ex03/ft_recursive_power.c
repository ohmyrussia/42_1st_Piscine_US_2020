/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:27:31 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/11 21:44:44 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (nb);
}

int		main(void)
{
	int num;
	int power;
	int nb;

	scanf("%d %d", &num, &power);
	nb = ft_recursive_power(num, power);
	printf("%d", nb);
	return (0);
}
