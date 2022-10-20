/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:33:54 by mdora             #+#    #+#             */
/*   Updated: 2022/10/16 00:35:40 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main()
{
	char *str = "42Kocaeli";
	printf("%d", ft_strlen(str));
}
