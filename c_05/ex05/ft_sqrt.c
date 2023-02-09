/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:20:51 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 15:23:51 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	long	index; // index adında long tipinde bir değişken tanımlıyoruz.
	long	b;  // b adında long tipinde bir değişken tanımlıyoruz.

	b = nb; // nb değişkeninin değerini b değişkenine eşitliyoruz.
	if (b <= 0) // b değişkeninin değeri 0'dan küçükse/eşitse bu koşula giriyoruz.
	{
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	}
	if (b == 1) // b değişkeninin değeri 1'e eşitse bu koşula giriyoruz.
	{
		return (1); // 1 döndürüp ekrana yazdırıyoruz.
	}
	index = 2; // index değerini 2'ye eşitliyoruz.
	if (b >= 2) // b değişkeninin değeri 2'den büyükse/eşitse bu koşula giriyoruz.
	{
		while (index * index <= b) // index değişkeninin değerinin kendiyle çarpımı b değerinden küçükse/eşitse bu döngüye giriyoruz.
		{
			if (index * index == b) // index değişkeninin değerinin kendiyle çarpımı b'ye eşitse bu koşula giriyoruz.
			{
				return (index); // index değerini döndürüp ekrana yazdırıyoruz.
			}
			index++; // index değerini 1 arttırıyoruz.
		}
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}