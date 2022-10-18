/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_putnbr.c                                              mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/13 03:02:19 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 03:08:28 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &c, 1); // Ekrana a değişkenini yazdır
}
void ft_putnbr(int nb) // Fonksiyonumuzda bir int parametresi istiyoruz
{	
    if(nb == -2147483648) // eğer nb değişkeni -2147483648 sayısına eşitse
    {
        ft_putchar('-'); // - değerini char'a çevir ve yazdır
        ft_putchar('2'); // 2 değerini char'a çevir ve yazdır
        ft_putchar('1'); // 1 değerini char'a çevir ve yazdır
        write(1,"47483648", 8); // 1 47483648 char'a çevir ve yazdır çünkü bir int değişkeninin alabileceği minimum değer -2147483648 olabileceğinden fonksiyona bu sayı yazıldığında hata verecekti
    }
	else if (nb < 0) // eğer nb değişkeni 0'dan küçükse
	{
		ft_putchar('-'); // - değerini char'a çevir ve yazdır
		ft_putnbr(-nb); // -nb değerini yazdır
	}
	else if (nb > 9) // eğer nb değişkeni 9'dan büyükse
	{
		ft_putnbr(nb / 10); // nb değerini 10'a böl ve yazdır
		ft_putnbr(nb % 10); // nb değerinin 10'a bölümünden kalanı yazdır
	}
	else if (nb <= 9) // eğer nb değişkeni 9'dan küçükse veya eşitse
	{
		ft_putchar(nb + 48); // nb değişkenini int tipinden char'a çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
	}
}
