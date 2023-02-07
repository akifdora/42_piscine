/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:18:18 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 21:18:34 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değerini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa bu döngüye giriyoruz.
	{
		if (!(str[i] >= 48 && str [i] <= 57)) // str değişkeninin i indeksindeki değeri ASCII tablosundaki 48 değerinden büyük/eşit değilse ve 57 değerinden küçük/eşit değilse döngüye giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}
