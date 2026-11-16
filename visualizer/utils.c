/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:23:36 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 11:48:47 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

static int	ft_prepend0x0(char *hexstr, int i)
{
	int	ii;

	ii = 0;
	hexstr[ii++] = '0';
	hexstr[ii++] = 'x';
	while (ii + i < 14)
		hexstr[ii++] = '0';
	return (ii);
}

char	*ft_dectohexstr(int decimal)
{
	char	character;
	int		remainders[8];
	int		i;
	int		ii;
	char	*hexstr;

	hexstr = ft_calloc(15, sizeof(char));
	if (!hexstr)
		return (NULL);
	i = 0;
	while (decimal > 0)
	{
		remainders[i] = ((((double)decimal / 16.0) - (decimal / 16)) * 16);
		decimal /= 16;
		i++;
	}
	ii = ft_prepend0x0(hexstr, i);
	while (i > 0)
	{
		i--;
		character = "0123456789abcdef"[remainders[i]];
		hexstr[ii++] = character;
	}
	return (hexstr);
}

static void	ft_putstroversize(char *str)
{
	char	*newstr;

	newstr = ft_calloc(15, sizeof(char));
	ft_memcpy(newstr, str, 15);
	newstr[11] = '.';
	newstr[12] = '.';
	newstr[13] = '.';
	newstr[14] = '\0';
	write(1, &newstr, 14);
	free(newstr);
}

void	ft_putstrncenter(char *str)
{
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(str);
	if (str_len >= 14)
	{
		ft_putstroversize(str);
		return ;
	}
	else
	{
		i = 0;
		while (i < (14 - str_len) / 2)
		{
			write(1, " ", 1);
			i++;
		}
		ft_putstr(str);
		i += str_len;
		while (i < 14)
		{
			ft_putstr(" ");
			i++;
		}
	}
}
