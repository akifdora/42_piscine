/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:23:37 by mdora             #+#    #+#             */
/*   Updated: 2022/10/15 23:25:29 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod) // Fonksiyonumuzda 4 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	if (b != 0) // Eğer b parametresinin değeri 0'a eşit değilse
	{
		*div = a / b; // a parametresinin değerinin b parametresinin değerine bölümünden çıkan değeri div değişkenine atıyoruz.
		*mod = a % b; // a parametresinin değerinin b parametresinin değerine modundan çıkan değeri div değişkenine atıyoruz.
	}
}
