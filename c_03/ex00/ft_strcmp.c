/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:55:58 by mdora             #+#    #+#             */
/*   Updated: 2022/10/26 14:12:10 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (s1[i] == s2[i] && s1[i] && s2[i]) // s1 değişkenin i değerindeki indeksi s2 değişkeninin i değerindeki indeksine eşitse ve s1 değişkeninin i değerindeki indeksi varsa ve s2 değişkeninin i değerindeki indeksi varsa bu koşula giriyoruz.
	{
		i++; // i değerini 1 arttırıyoruz.
	}
	return (s1[i] - s2[i]); // s1 değişkeninin i değerindeki indeksinden s2 değişkeninin i değerindeki indeksinin ASCII değerlerinin karşılıklarını çıkartıp döndürüyoruz ve ekrana yazdırıyoruz.
}
