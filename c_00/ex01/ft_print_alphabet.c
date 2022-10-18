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
	char	say;

	say = 97;
	while (say <= 122)
	{
		write(1, &say, 1);
		say++;
	}
}
