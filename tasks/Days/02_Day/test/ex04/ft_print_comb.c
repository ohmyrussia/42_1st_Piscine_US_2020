/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:55:10 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/09 19:44:21 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

void	ft_print_comb(void)
{
	int arr[3];

	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_putchar(arr[0]);
				ft_putchar(arr[1]);
				ft_putchar(arr[2]);
				ft_putchar(',');
				ft_putchar(' ');
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
	ft_putchar('\b');
	ft_putchar('\b');
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
