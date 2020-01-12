/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:39:13 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/08 20:44:47 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar (char c)
{
	write(1,&c,1);
	return(0);
}

void ft_print_numbers(void)
{
	char c;
	c = '0';
	while (c <= '9')
		{
			ft_putchar(c);
			c++;
		}
}

int main()
{
	char c;
	ft_print_numbers();
	ft_putchar (c);
	ft_putchar('\n');
	return(0);
}
