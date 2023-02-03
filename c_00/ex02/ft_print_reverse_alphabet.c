/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_print_reverse_alphabet.c                              mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/12 23:31:31 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:28:29 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	say; // say adında bir integer değişken tanımlandı.

	say = 122; // z harfinin ascii karşılığı
	while (say >= 97) // a harfinin ascii karşılığı, say değişkeni bu sayıdan büyük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write(1, &say, 1); // say değişkenini ekrana yazdır
		say--; // 1 azalt
	}
}
