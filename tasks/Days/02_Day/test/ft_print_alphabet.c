/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:39:13 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/08 20:50:00 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar (char c)
{
	write(1,&c,1);
	return(0);
}

void ft_print_alphabet(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
		{
			ft_putchar(c);
			c++;
		}
}

int main()
{
	char c;
	ft_print_alphabet();
	ft_putchar (c);
	ft_putchar('\n');
	return(0);
}
