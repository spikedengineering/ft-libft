/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:23:36 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 11:06:51 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

static char	*dectohexstr(int decimal)
{
	//0x7fffeccb7660
	char	character;
	int		remainders[8];
	int		i;
	int		ii;
	char	*hex_chars = "0123456789abcdef";
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
	ii = 0;
	hexstr[ii++] = '0';
	hexstr[ii++] = 'x';
	while (ii + i < 14)
		hexstr[ii++] = '0';
	while (i > 0)
	{
		i--;
		character = hex_chars[remainders[i]];
		hexstr[ii++] = character;
	}
	return (hexstr);
}

static void	putstrncenter(char *str)
{
	size_t str_len;
	char *newstr;
	size_t i;

	str_len = ft_strlen(str);
	if (str_len >= 14)
	{
		newstr = ft_calloc(15, sizeof(char));
		ft_memcpy(newstr, str, 15);
		newstr[11] = '.';
		newstr[12] = '.';
		newstr[13] = '.';
		newstr[14] = '\0';
		write(1, &newstr, 14);
		//free(newstr);
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

void	visualize_node(t_list *lst, int is_first)
{
	char *hex_str;
	if (!lst)
	{
		ft_putstr("ERROR: lst is NULL\n");
		return ;
	}
	if (is_first)
		ft_putstr("┌──────────────────────┐\n");
	else
		ft_putstr("┌───────────V──────────┐\n");
	hex_str = dectohexstr((long)lst);
	ft_putstr("│    ");
	ft_putstr(hex_str);
	ft_putstr("    │\n");
	free(hex_str);
	ft_putstr("├──────────────────────┤\n");
	ft_putstr("│       CONTENT        │\n");
	ft_putstr("│  ┌────────────────┐  │\n");
	if (lst->content)
	{
		hex_str = dectohexstr((long)lst->content);
		ft_putstr("│  │ ");
		ft_putstr(hex_str);
		ft_putstr(" ───────────────────────┐\n");
		free(hex_str);
	}
	else
		ft_putstr("│  │      NULL      │  │\n");
	ft_putstr("│  └────────────────┘  │");
	if (lst->content)
		ft_putstr("                   │");
	ft_putstr("\n");
	ft_putstr("│                      │");
	if (lst->content)
		ft_putstr("        ┌──────────V───────────┐");
	ft_putstr("\n");
	ft_putstr("│         NEXT         │");
	if (lst->content)
	{
		hex_str = dectohexstr((long)lst->content);
		ft_putstr("        │    ");
		ft_putstr(hex_str);
		ft_putstr("    │");
		free(hex_str);
	}
	ft_putstr("\n");
	ft_putstr("│  ┌────────────────┐  │");
	if (lst->content)
		ft_putstr("        ├──────────────────────┤");
	ft_putstr("\n");
	hex_str = dectohexstr((long)lst->content);
	ft_putstr("│  │ ");
	ft_putstr(hex_str);
	ft_putstr(" ");
	free(hex_str);
	if (lst->next)
		ft_putstr("───────┐    ");
	else
		ft_putstr("│  │        ");
	if (lst->content)
		ft_putstr("│   AS UNSIGNED CHAR   │");
	ft_putstr("\n");
	ft_putstr("│  └────────────────┘  │");
	if (lst->next)
		ft_putstr("   │    ");
	else
		ft_putstr("        ");
	if (lst->content)
		ft_putstr("│  ┌────────────────┐  │");
	ft_putstr("\n");
	ft_putstr("└──────────────────────┘");
	if (lst->next)
		ft_putstr("   │    ");
	else
		ft_putstr("        ");
	if (lst->content)
	{
		ft_putstr("│  │ ");
		putstrncenter(lst->content);
		ft_putstr(" │  │");
	}
	ft_putstr("\n");
	if (lst->next)
		ft_putstr("                           │    ");
	else
		ft_putstr("                                ");
	if (lst->content)
		ft_putstr("│  └────────────────┘  │");
	ft_putstr("\n");
	if (lst->next)
		ft_putstr("            ┌──────────────┘    ");
	else
		ft_putstr("                                ");
	if (lst->content)
		ft_putstr("└──────────────────────┘");
	ft_putstr("\n");
	if (lst->next)
		ft_putstr("            │");
	ft_putstr("\n");
}

int	main(void)
{
	t_list *lst = ft_lstnew("hello");
	lst->next = ft_lstnew(NULL);
	visualize_node(lst, 1);
}
