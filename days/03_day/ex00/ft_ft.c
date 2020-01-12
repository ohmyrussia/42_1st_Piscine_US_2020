/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:19:49 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/10 13:10:54 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int n = 5;      // assign variable 'n' with the value 5
	int *ptr = &n;  // assign * variable 'ptr' with the address (&) of n

	// n -> 0xabc
	// ptr points to 0xabc

	ft_ft(ptr);

	printf("%d", n);
}
