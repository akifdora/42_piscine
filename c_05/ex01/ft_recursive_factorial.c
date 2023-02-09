/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:50:53 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 13:57:04 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	result; // result adında integer tipinde bir değişken tanımlıyoruz.

	result = 1; // result değişkenini 1'e eşitliyoruz.
	if (nb > 0) // nb değişkeninin değeri 0'dan büyükse bu koşula giriyoruz.
	{
		result *= nb * ft_recursive_factorial(nb - 1); // result değişkeni nb ile ft_recursive_factorial(nb - 1) fonksiyonunun çarpımı ile çarpılır.
		nb -= 1; // nb'nin değerini 1 azaltıyoruz.
	}
	if (nb < 0) // nb değişkeninin değeri 0'dan küçükse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	return (result); // result değerini döndürüp ekrana yazdırıyoruz.
}