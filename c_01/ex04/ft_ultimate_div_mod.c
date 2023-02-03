/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:27:15 by mdora             #+#    #+#             */
/*   Updated: 2022/10/15 23:27:39 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	div; // div adında integer tipinde bir değişken oluşturuyoruz.
	int	mod; // mod adında integer tipinde bir değişken oluşturuyoruz.

	div = *a / *b; // a parametresinin değerinin b parametresinin değerine bölümünden çıkan değeri div değişkenine atıyoruz.
	mod = *a % *b; // a parametresinin değerinin b parametresinin değerine modundan çıkan değeri div değişkenine atıyoruz.
	*a = div; // div değişkenindeki değeri a değişkenine atıyoruz.
	*b = mod; // mod değişkenindeki değeri b değişkenine atıyoruz.
}
