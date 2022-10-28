/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:31:04 by mdora             #+#    #+#             */
/*   Updated: 2022/10/26 17:58:55 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int    x;
    int    y;

    x = 0;
    while (dest[x])
        x++;
    y = 0;
    while (src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);
}

int	main()
{
	char src[] = "Doraaa";
	char dest[] = "Akif ";
	printf("%s", ft_strcat(dest, src));
}
