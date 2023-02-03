/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:35:59 by mdora             #+#    #+#             */
/*   Updated: 2022/10/16 03:58:08 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string) // Fonksiyonumuzda 1 adet char tipinde bir string parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	n; // n adında integer tipinde bir değişken oluşturuyoruz.

	n = 0; // n'in değerini 0'a eşitliyoruz.
	while (string[n] != '\0') // Eğer string değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		n++; // n değişkeninin değerini 1 arttırıyoruz.
	}
	return (n); // n değerini döndürüyoruz ve bu sayede ekranda n değeri kaçsa o çıktıyı görüyoruz.
}
