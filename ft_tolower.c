/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:59:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 08:00:15 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

//#include <stdio.h>
//int	main(void)
//{
//	char c = 'I';
//	printf("%c", c);
//	printf("%c", ft_tolower(c));
//}
