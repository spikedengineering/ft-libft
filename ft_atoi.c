/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:54:44 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/02 22:15:04 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	multiplier;
	int	result;
	int	sign;

	multiplier = 1;
	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] && (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	while (i > 0 && nptr[i - 1] >= '0' && nptr[i - 1] <= '9')
	{
		result += (nptr[i - 1] - '0') * multiplier;
		multiplier *= 10;
		i--;
	}
	if (i > 0 && nptr[i - 1] == '-')
		sign = -1;
	return (result * sign);
}

//#include <stdio.h>
//#include <stdlib.h>
//int	main(void)
//{
//	char number[10] = "  +246";
//	printf("%d\n", ft_atoi(number));
//	printf("%d\n", atoi(number));
//}
