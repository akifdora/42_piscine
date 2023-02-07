/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:22:07 by mdora             #+#    #+#             */
/*   Updated: 2022/10/15 23:25:15 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	tmp; // tmp adında integer tipinde bir değişken oluşturuyoruz.

	tmp = *a; // Fonksiyonda gönderilen a parametresinin değerini tmp değişkenine eşitliyoruz.
	*a = *b; // Fonksiyonda gönderilen b parametresinin değerini a değişkenine eşitliyoruz.
	*b = tmp; // İlk başta a parametresinden gelen değeri tmp'ye göndermiştik şimdi de tmp değerini b değişkenine eşitliyoruz.
	// Ve bu sayede fonksiyonda gönderilen a parametresindeki değer ile b parametresindeki değer yer değiştirmiş oluyor.
}
