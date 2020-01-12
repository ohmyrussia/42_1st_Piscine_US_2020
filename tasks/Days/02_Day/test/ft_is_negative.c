/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:25:51 by eshilov           #+#    #+#             */
/*   Updated: 2020/01/08 22:36:48 by eshilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar (char c)
{
	write(1,&c,1);
	return(0);
}

void	 ft_is_negative(int n)
{
	if (n >=0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

int		 main(void)
{
	//char	*buff;
	int		num;

	//read(1, buff, sizeof(buff));
	//num = buff(0) - '0';
	scanf("%d",&num);
	ft_is_negative(num);

	//ft_is_negative(1);
	return(0);
}
