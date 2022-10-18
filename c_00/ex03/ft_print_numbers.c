/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_print_numbers.c                                       mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/12 23:37:52 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:29:46 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	say; // say adında bir integer değişken tanımlandı

	say = 48; // 0 rakamının ascii karşılığı
	while (say <= 57) // 9 rakamının ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write(1, &say, 1); // say değişkenini ekrana yazdır
		say++; // 1 arttır
	}
}
