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
	int	say;

	say = 48;
	while (say <= 57)
	{
		write(1, &say, 1);
		say++;
	}
}
