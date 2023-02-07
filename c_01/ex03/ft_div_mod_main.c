/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:25:48 by mdora             #+#    #+#             */
/*   Updated: 2022/10/15 23:25:50 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a = 13;
	int b = 2;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div:%d mod:%d", *div, *mod);
	return(0);
}
