/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:01:23 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:21:48 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../visualizer/visualizer.h"

void	ft_nodeconstruct0(t_list *lst, int is_first, char *hex_str)
{
	if (!lst)
	{
		ft_putstr("ERROR: lst is NULL\n");
		return ;
	}
	if (is_first)
		ft_putstr("┌──────────────────────┐\n");
	else
		ft_putstr("┌───────────V──────────┐\n");
	hex_str = ft_dectohexstr((long)lst);
	ft_putstr("│    ");
	ft_putstr(hex_str);
	ft_putstr("    │\n");
	free(hex_str);
	ft_putstr("├──────────────────────┤\n");
	ft_putstr("│       CONTENT        │\n");
	ft_putstr("│  ┌────────────────┐  │\n");
}

void	ft_nodeconstruct1(t_list *lst, char *hex_str)
{
	if (lst->content)
	{
		hex_str = ft_dectohexstr((long)lst->content);
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
}

void	ft_nodeconstruct2(t_list *lst, char *hex_str)
{
	if (lst->content)
	{
		hex_str = ft_dectohexstr((long)lst->content);
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
	if (lst->next)
	{
		hex_str = ft_dectohexstr((long)lst->next);
		ft_putstr("│  │ ");
		ft_putstr(hex_str);
		ft_putstr(" ");
		free(hex_str);
	}
	else
		ft_putstr("│  │      NULL      ");
}

void	ft_nodeconstruct3(t_list *lst)
{
	if (lst->next)
		ft_putstr("───────┐    ");
	else
		ft_putstr("│  │        ");
	if (lst->content)
		ft_putstr("│      AS CHARS        │");
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
}

void	ft_nodeconstruct4(t_list *lst)
{
	if (lst->content)
	{
		ft_putstr("│  │ ");
		ft_putstrncenter(lst->content);
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
