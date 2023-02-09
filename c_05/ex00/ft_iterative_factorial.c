/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:47:01 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 13:50:18 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	result; // result adında unsigned integer tipinde bir değişken tanımlıyoruz.

	result = 1; // result değişkenini 1'e eşitliyoruz.
	while (nb > 0) // nb değişkeninin değeri 0'dan büyükse bu döngüye giriyoruz.
	{
		result *= nb; // result değişkeninin değerinin nb değişkeninin değeri ile çarpımının sonucunu result değişkenine eşitliyoruz.
		nb--; // nb'nin değerini 1 azaltıyoruz.
	}
	if (nb < 0) // nb değişkeninin değeri 0'dan küçükse bu koşula giriyoruz.
	{
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	}
	return (result); // result değerini döndürüp ekrana yazdırıyoruz.
}