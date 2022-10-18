/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_is_negative.c                                         mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/12 23:49:21 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:30:51 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int s) // Fonksiyonumuzda bir int parametresi istiyoruz
{
	if (s < 0) // İstediğimiz değere sıfırdan küçükse
		write(1, "N", 1); // Ekrana N harfi yazdır
	else
		write(1, "P", 1); // Ekrana P harfi yazdır
}
