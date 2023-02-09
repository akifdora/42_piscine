/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:37:49 by mdora             #+#    #+#             */
/*   Updated: 2022/10/29 12:44:20 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str) // Fonksiyonumuzda 1 adet char tipinde bir string parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	i; // n adında integer tipinde bir değişken oluşturuyoruz.

	i = 0; // n'in değerini 0'a eşitliyoruz.
	while (str[i] != '\0') // Eğer string değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		i++; // n değişkeninin değerini 1 arttırıyoruz.
	}
	return (i); // n değerini döndürüyoruz ve bu sayede ekranda n değeri kaçsa o çıktıyı görüyoruz.
}
