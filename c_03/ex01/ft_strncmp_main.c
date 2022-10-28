/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:33:17 by mdora             #+#    #+#             */
/*   Updated: 2022/10/26 16:33:19 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strncmp("Arifdora", "Akifdora", 5));
	printf("%d\n", ft_strncmp("Akifdora", "akif dora", 5));
	printf("%d\n", ft_strncmp("akifdora", "akifdora", 5));
	
	printf("%d\n", strncmp("Arifdora", "Akifdora", 5));
	printf("%d\n", strncmp("Akifdora", "akif dora", 5));
	printf("%d", strncmp("akifdora", "akifdora", 5));
}
