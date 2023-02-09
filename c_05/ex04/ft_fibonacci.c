/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:06:48 by mdora             #+#    #+#             */
/*   Updated: 2023/02/09 15:19:43 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	if (index < 0) // index değeri 0'dan küçükse bu koşula giriyoruz.
		return (-1); // -1 döndürüp ekrana yazdırıyoruz.
	if (index < 2) // index değeri 2'den küçükse bu koşula giriyoruz.
		return (index); // index değerini döndürüp ekrana yazdırıyoruz.
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1)); // index değerinin 2 ve 1 öncesindeki index değerlerine ait fibonacci sayılarının toplamını döndürüyoruz.
}