/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:02:45 by mdora             #+#    #+#             */
/*   Updated: 2022/10/28 21:10:36 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	x; // x adında integer bir değişken tanımlıyoruz.
	int	y; // y adında integer bir değişken tanımlıyoruz.

	x = 0; // x değişkenini 0'a eşitliyoruz.
	while (dest[x]) // dest değişkeninin x değerindeki indeksi varsa bu koşula giriyoruz.
		x++; // x değerini 1 arttırıyoruz.
	y = 0; // y değişkenini 0'a eşitliyoruz.
	while (src[y]) // src değişkeninin y değerindeki indeksi varsa bu koşula giriyoruz.
	{
		dest[x + y] = src[y]; // src değişkenin y değerindeki indeksini dest değişkeninin x ve y değerinin toplamındaki indeksine eşitliyoruz.
		y++; // y değerini 1 arttırıyoruz.
	}
	dest[x + y] = '\0'; // dest değişkeninin x ve y değerinin toplamındaki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
