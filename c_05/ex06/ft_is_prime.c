/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:27:42 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 15:32:39 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 2; // i değişkeninin değerini 2'ye eşitliyoruz
	if (nb <= 1) // nb değişkeninin değeri 1'den küçükse/eşitse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	while (i <= (nb / 2)) // i değişkeninin değeri nb değişkeninin değerinin 2'ye bölümünden küçükse/eşitse bu döngüye giriyoruz.
	{
		if (!(nb % i)) // nb değişkeninin değerinin i değişkeninin değerine modundan kalan varsa bu koşula giriyoruz.
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		else
			i += 1; // i'nin değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}