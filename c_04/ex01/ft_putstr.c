/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:41:32 by mdora             #+#    #+#             */
/*   Updated: 2022/10/29 12:41:50 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str) // Fonksiyonumuzda 1 adet char tipinde bir str parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	i; // n adında integer tipinde bir değişken oluşturuyoruz.

	i = 0; // n'in değerini 0'a eşitliyoruz.
	while (str[i] != '\0') // Eğer str değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		write (1, &str[i], 1); // str değişkeninin n değerindeki indeksini ekrana yazdırıyoruz.
		i++; // n değişkeninin değerini 1 arttırıyoruz.
	}	
}
