/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:03:22 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/11 21:56:44 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_interative_power(int nb, int power)
{
	int i;
	int nbp;

	i = 1;
	nbp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * nbp;
		i++;
	}
	return (nb);
}

int		main(void)
{
	int num;
	int power;
	int nb;

	scanf("%d %d", &num, &power);
	nb = ft_interative_power(num, power);
	printf("%d", nb);
	return (0);
}
