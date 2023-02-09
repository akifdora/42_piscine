/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:38:09 by mdora             #+#    #+#             */
/*   Updated: 2022/10/30 20:25:16 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken tanımlıyoruz.
	int	s; // s adında integer tipinde bir değişken tanımlıyoruz.
	int	res; // res adında integer tipinde bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	s = 1; // s değişkenini 1'e eşitliyoruz.
	res = 0; // res değişkenini 0'a eşitliyoruz.
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') // str değişkeninin i değerindeki indeksi TAB'dan büyükse/eşitse ve RETURN'den küçükse/eşitse ya da boşluğa eşitse bu döngüye giriyoruz.
		i++; // i'nin değerini 1 arttırıyoruz.
	while (str[i] == '+' || str[i] == '-') // str değişkeninin i değerindeki indeksi +'ya ya da -'ye eşitse bu döngüye giriyoruz.
	{
		if (str[i] == '-') // str değişkeninin i değerindeki indeksi -'ye eşitse bu koşula giriyoruz.
			s = s * -1; // s değerinin -1 ile çarpımından çıkan sonucu s değerine eşitliyoruz. Bunu yapmamızın sebebi gelen değeri pozitife döndürmek istememizden kaynaklı.
		i++; // i'nin değerini 1 arttırıyoruz.
	}
	while (str[i] >= '0' && str[i] <= '9') // str değişkeninin i değerindeki indeksi 0'dan büyükse/eşitse ve 9'dan küçükse/eşitse bu döngüye giriyoruz.
	{
		res = (str[i] - 48) + (res * 10); // str değişkeninin i değerini 48'den çıkartıyoruz, res değişkeninin değerini 10 ile çarpıyoruz çıkan değerleri toplayıp res değerine eşitliyoruz. Bu işlemin yapılmasının sebebi stringte gelen sayının ASCII değerini algılayıp sayısal karşılığını bulmak.
		i++; // i'nin değerini 1 arttırıyoruz.
	}
	return (res * s); // res değişkeninin değerini s değişkeninin değeri ile çarpıp döndürüp ekrana yazdırıyoruz.
}
