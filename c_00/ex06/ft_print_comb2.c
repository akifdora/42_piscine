/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_print_comb2.c                                         mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/13 02:56:50 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 03:01:40 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &a, 1); // Ekrana a değişkenini yazdır
}

void	ft_print_comb2(void)
{
	int	a; // a diye bir int değişkeni tanımlandı
	int	b; // a diye bir int değişkeni tanımlandı

	a = -1; // a değişkeninin değeri -1 oldu çünkü istenen alıştırmada a'nın 0'dan başlaması gerekiyor
	while (a++ < 98) // a değişkeninin 1 fazlası 98'den küçükse döngüye gir çünkü istenen alıştırmada a'nın alabileceği maksimum değer 98
	{
		b = a; // b değişkeni a değişkenin değerini aldı
		while (b++ < 99) // b değişkeninin 1 fazlası 99'dan küçükse döngüye gir çünkü istenen alıştırmada b'nin alabileceği maksimum değer 99
		{
			ft_putchar((a / 10) + 48); // a değişkenimizi 10'a bölüp gelen int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			ft_putchar((a % 10) + 48); // a değişkenimizin 10'a bölümünden kalan int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			ft_putchar(' '); // boşluk yazdır
			ft_putchar((b / 10) + 48); // b değişkenimizi 10'a bölüp gelen int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			ft_putchar((b % 10) + 48); // b değişkenimizin 10'a bölümünden kalan int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			if (a != 98) // eğer a değişkeni 98'e eşit değilse
			{
				ft_putchar(','); // virgül yazdır
				ft_putchar(' '); // boşluk yazdır
			}
		}
	}
}
