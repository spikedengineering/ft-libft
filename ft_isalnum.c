/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:28:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/27 22:51:57 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_isalnum('1'));
//	printf("%d\n", ft_isalnum('a'));
//	printf("%d\n", ft_isalnum('B'));
//	printf("%d\n", ft_isalnum('.'));
//}
