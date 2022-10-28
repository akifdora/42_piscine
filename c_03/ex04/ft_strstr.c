/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:18:43 by mdora             #+#    #+#             */
/*   Updated: 2022/10/28 21:31:31 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	j;

	i = 0;
	if (find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == find[j] && str[i])
		{
			if (find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
