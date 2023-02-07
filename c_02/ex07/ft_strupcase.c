/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:25:04 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 23:25:28 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (str[i] >= 'a' && str[i] <= 'z') // str değişkeninin i değerindeki indeksi küçük a harfinden büyükse/eşitse ve küçük z harfinden küçükse/eşitse bu koşula giriyoruz.
		{
			str[i] -= 32; // str değişkeninin i değerinindeki indeksinde bulunan alfabetik karakteri büyütmek için ASCII tablosunda 32 değer eksiltiyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (str); // str değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
