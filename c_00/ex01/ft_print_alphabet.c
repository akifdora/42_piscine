/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_print_alphabet.c                                      mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/12 22:46:59 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:27:19 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; // say diye bir char değişkeni tanımlandı

	say = 97; // a harfinin ascii karşılığı
	while (say <= 122) // z harfinin ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write(1, &say, 1); // say değişkenini ekrana yazdır
		say++; // 1 arttır
	}
}
