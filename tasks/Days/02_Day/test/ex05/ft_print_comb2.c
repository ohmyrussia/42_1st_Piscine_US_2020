/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:44:48 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/09 20:47:08 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int arr[2];

	arr[0] = -1;
	while (++arr[0] <= 98)
	{
		arr[1] = arr[0];
		while (++arr[1] <= 99)
		{
			ft_putchar((arr[0] / 10) + '0');
			ft_putchar((arr[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((arr[1] / 10) + '0');
			ft_putchar((arr[1] % 10) + '0');
			if (arr[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
