/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 22:27:08 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/11 23:08:46 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if ((nb > 46340 * 46340) || (nb <= 0))
		return (0);
	while (sqrt * sqrt < nb)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

int		main(void)
{
	int nb;

	scanf("%d", &nb);
	printf("%d", ft_sqrt(nb));
	return (0);
}
