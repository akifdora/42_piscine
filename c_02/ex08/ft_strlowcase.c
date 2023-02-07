/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:26:29 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 23:26:39 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // str değişkeninin i değerindeki indeksi büyük A harfinden büyükse/eşitse ve büyük Z harfinden küçükse/eşitse bu koşula giriyoruz.
		{
			str[i] += 32; // str değişkeninin i değerinindeki indeksinde bulunan alfabetik karakteri küçültmek için ASCII tablosunda 32 değer arttırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (str); // str değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
