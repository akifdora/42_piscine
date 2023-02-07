/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:20:57 by mdora             #+#    #+#             */
/*   Updated: 2022/10/23 01:21:06 by mdora            ###   ########.tr       */
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

char	*ft_strcapitalize(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int		i; // i adında integer bir değişken tanımlıyoruz.
	int		i1; // i1 adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	i1 = 1; // i1 değişkenini 1'e eşitliyoruz. Bu değişkeni oluşturmamızın sebebi stringte alfabetik karakter dışında herhangi bir karaktere gelip gelmediğimizi anlamak, altta bulunan kodda zaten göreceksiniz, i1 değeri 1'e eşit olduğunda bulunduğumuz harf büyüyecek ve sonrasında o değeri 0'a eşitleyeceğiz. Eğer ki bize gelen stringte boşluk algılarsak i1 değerini tekrar 1'e eşitleyeceğiz ve bu sayede boşluk sonrasındaki kelimenin ilk harfinde i1 değerimiz 1'e eşit olduğundan o harfi de büyüteceğiz.
	ft_strlowcase(str); // Öncelikle gelen str değerini üstte bulunan fonksiyona gönderip bütün alfabetik karakterlerini küçültüyoruz, çünkü bu exte bizden istenen şey gelen string değerinin sadece baş harflerini büyütmek.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (str[i] >= 'a' && str[i] <= 'z') // str değişkeninin i değerindeki indeksi küçük a harfinden büyükse/eşitse ve küçük z harfinden küçükse/eşitse bu koşula giriyoruz.
		{
			if (i1 == 1) // i1 değişkeni 1'e eşitse bu koşula giriyoruz.
				str[i] -= 32; // str değişkenin i değerindeki indeksindeki harfi büyütüyoruz.
			    i1 = 0; // i1 değerini 0'a eşitliyoruz.
		}
		else if (str[i] >= '0' && str[i] <= '9') // str değişkeninin i değerindeki indeksi 0'dan büyükse/eşitse ve 9'dan küçükse/eşitse bu koşula giriyoruz.
			i1 = 0; // i1 değerini 0'a eşitliyoruz.
		else // Üstte bulunan koşullar sağlanmıyorsa bu koşula giriyoruz.
			i1 = 1; // i1 değerini 1'e eşitliyoruz.
		i++; // i değerini 1 arttırıyoruz.
	}
	return (str); // str değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
