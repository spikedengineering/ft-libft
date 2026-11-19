/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:50:01 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:52:40 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

//void	f(unsigned int i, char *c)
//{
//	(void)i;
//	if (*c >= 'a' && *c <= 'z')
//		*c = *c - 32;
//}
//
//int	main(void)
//{
//	char s[20] = "Carvalho, Alexandre";
//
//	ft_putstr_fd(s, 1);
//	ft_putstr_fd("\n", 1);
//	ft_striteri(s, f);
//	ft_putstr_fd(s, 1);
//	ft_putstr_fd("\n", 1);
//}
