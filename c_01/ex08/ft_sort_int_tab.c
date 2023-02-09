/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:15:43 by mdora             #+#    #+#             */
/*   Updated: 2022/10/16 02:19:26 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken oluşturuyoruz.
	int	swap; // swap adında integer tipinde bir değişken oluşturuyoruz.

	while (size >= 0) // size değişkeninin değeri 0'dan büyükse/eşitse bu döngüye giriyoruz
	{
		i = 0; // i değerini 0'a eşitliyoruz.
		while (i < size - 1) // i değişkeninin değeri size değişkeninin değerinin 1 eksiğinden küçükse bu döngüye giriyoruz.
		{
			if (tab[i] > tab[i + 1]) // tab değişkeninin i değerindeki indeksi tab değişkeninin i değerindeki indeksinin 1 fazlasından büyükse bu koşula giriyoruz.
			{
				swap = tab[i]; // tab değişkeninin i değerindeki indeksi swap değişkenine eşitliyoruz.
				tab[i] = tab[i + 1]; // tab değişkeninin i değerindeki indeksinin 1 fazlasını tab değişkenin i değerindeki indeksine eşitliyoruz.
				tab[i + 1] = swap; // swap değişkeninin değerini tab değişkeninin i değerindeki indeksinin 1 fazlasına eşitliyoruz.
			}
			i++; // i değerini 1 arttırıyoruz.
		}
		size--; // size değerini 1 azaltıyoruz.
	}
}
