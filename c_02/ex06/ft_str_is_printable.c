/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:21:34 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 23:22:10 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (!(str[i] >= 32 && str[i] <= 126)) // str değişkenin i değerindeki indeksi ASCII tablosundaki 32 değerinden büyük/eşit değilse ve 126 değerinden küçük/eşit değilse bu koşula giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}
