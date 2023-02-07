/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:20:01 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 23:20:12 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değerini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa bu döngüye giriyoruz.
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')) // str değişkeninin i değerindeki indeksi büyük A harfinden büyük/eşit değilse ve büyük Z harfinden küçük/eşit değilse bu koşula giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}
