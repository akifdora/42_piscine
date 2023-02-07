/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:27:46 by mdora             #+#    #+#             */
/*   Updated: 2022/10/22 23:16:14 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken oluşturuyoruz.

	i = 0; // i'nin değerini 0'a eşitliyoruz.
	while (src[i]) // Eğer src değişkeninin i değerindeki indeksi varsa bir döngüye giriyoruz.
	{
		dest[i] = src[i]; // src değişkeninin i değerindeki indeksini dest değişkeninin i değerindeki indeksine gönderiyoruz.
		i++; // i değişkenini 1 arttırıyoruz.
	}
	dest[i] = '\0'; // Kopyalama işlemi bitip, döngüden çıktıktan sonra dest değişkeninin i değerindeki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değerini döndürüp ekrana yazdırıyoruz.
}
