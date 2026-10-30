/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:55:08 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 08:27:00 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 31 || c >= 127)
		return (0);
	else
		return (1);
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_isprint(' '));
//	printf("%d\n", ft_isprint('\t'));
//}
