/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:29:33 by mdora             #+#    #+#             */
/*   Updated: 2022/10/28 21:11:16 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb) // Fonksiyonumuzda 2 adet char ve 1 adet unsigned integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	x; // x adında unsigned integer tipinde bir değişken tanımlıyoruz.
	unsigned int	y; // y adında unsigned integer tipinde bir değişken tanımlıyoruz.

	x = 0; // x değişkenini 0'a eşitliyoruz.
	y = 0; // y değişkenini 0'a eşitliyoruz.
	while (dest[x]) // dest değişkeninin x indeksindeki değeri varsa bu koşula giriyoruz.
	x++; // x değerini 1 arttırıyoruz.
	while (y < nb && src[y]) // y değişkeninin değeri nb değişkeninin değerinden küçükse ve src değişkeninin y değerindeki indeksi varsa bu koşula giriyoruz.
	{
		dest[x + y] = src[y]; // src değişkenin y değerindeki indeksini dest değişkeninin x ve y değerinin toplamındaki indeksine eşitliyoruz.
		y++; // y değerini 1 arttırıyoruz.
	}
	dest[x + y] = '\0'; // dest değişkeninin x ve y değerinin toplamındaki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
