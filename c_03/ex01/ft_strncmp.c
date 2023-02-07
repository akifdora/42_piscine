/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:31:59 by mdora             #+#    #+#             */
/*   Updated: 2022/10/28 21:08:50 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n) // Fonksiyonumuzda 2 adet char ve 1 adet unsigned integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	i; // i adında unsigned integer tipinde bir değişken tanımlıyoruz.

	if (n == 0) // n değeri 0'a eşitse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1) // s1 değişkeninin i değerindeki indeksi varsa ve s2 değişkeninin i değerindeki indeksi varsa ve s1 değişkeninin i değerindeki indeksi s2 değişkeninin i değerindeki indeksine eşitse ve i değeri n değerinin bir eksiğinden büyükse bu koşula giriyoruz.
		i++; // i değerini 1 arttırıyoruz.
	return (s1[i] - s2[i]); // s1 değişkeninin i değerindeki indeksinden s2 değişkeninin i değerindeki indeksinin ASCII değerlerinin karşılıklarını çıkartıp döndürüyoruz ve ekrana yazdırıyoruz.
}
