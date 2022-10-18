/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_print_comb.c                                          mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/13 01:13:12 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:32:03 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a; // a adında bir integer değişken tanımlandı
	int	b; // b adında bir integer değişken tanımlandı
	int	c; // c adında bir integer değişken tanımlandı

	a = '0'; // a değişkeni 0'a eşitlendi
	while (a <= '7') // a değişkeni 7'den küçük veya eşitse döngüye gir
	{
		b = a + 1; // b değişkeni a değişkeninin bir fazlası
		while (b <= '8') // b değişkeni 8'den küçük veya eşitse döngüye gir
		{
			c = b + 1; // c değişkeni b değişkeninin bir fazlası
			while (c <= '9') // c değişkeni 9'den küçük veya eşitse döngüye gir
			{
				write(1, &a, 1); // a değişkenini ekrana yazdır
				write(1, &b, 1); // b değişkenini ekrana yazdır
				write(1, &c, 1); // c değişkenini ekrana yazdır
				if (a != '7') // eğer a değişkeni 7'ye eşit değilse
					write(1, ", ", 2); // ekrana ", " yazdır
				c++; // c değişkenini 1 arttır
			}
			b++; // b değişkenini 1 arttır
		}
		a++; // a değişkenini 1 arttır
	}
}
