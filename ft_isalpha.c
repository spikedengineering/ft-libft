/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:28:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/27 22:52:18 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_isalpha('a'));
//	printf("%d\n", ft_isalpha('A'));
//	printf("%d\n", ft_isalpha('.'));
//}
