/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:34 by mdora             #+#    #+#             */
/*   Updated: 2022/10/26 16:35:36 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strcmp("Arifdora", "Akifdora"));
	printf("%d\n", ft_strcmp("Akifdora", "akif dora"));
	printf("%d", ft_strcmp("akifdora", "akifdora"));
}
