/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:03:17 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/17 22:30:12 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	character;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	sign = (n > 0) - (n < 0);
	n *= sign;
	if (sign == -1)
		write(fd, "-", 1);
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	character = (n % 10) + '0';
	write(fd, &character, 1);
}

//int	main(void)
//{
//	ft_putnbr_fd(-2147483648, 1);
//}
