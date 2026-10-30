/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:28:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/27 22:52:55 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//Int	main(void)
//{
//	printf("%d\n", ft_isdigit('2'));
//	printf("%d\n", ft_isdigit('a'));
//}
