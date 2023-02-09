/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:55:43 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 13:55:49 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		 result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

int main (void)
{
	printf("%i", ft_iterative_factorial(3));
}