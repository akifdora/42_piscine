/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:19:43 by mdora             #+#    #+#             */
/*   Updated: 2022/10/26 19:19:48 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int	main()
{
	char str[] = "42Kocaeli havuz öğrencisi Muhammed Akif DORA";
	char to_find[] = "Muhammed";
	printf("%s", ft_strstr(str, to_find));
}
