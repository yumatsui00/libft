/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:21:51 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/27 14:08:02 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	toi(long n, const char *s, int sign)
{
	long	bn;

	if (!ft_isdigit(*s))
		return (n);
	bn = n;
	if (sign == -1)
	{
		n = n * 10 - (*s - '0');
		if (n / 10 > bn)
			return ((int)LONG_MIN);
	}
	else
	{
		n = n * 10 + (*s - '0');
		if (n / 10 < bn)
			return ((int)LONG_MAX);
	}
	return (toi(n, s + 1, sign));
}

int	ft_atoi(const char *nptr)
{
	int	sign;

	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr == '0')
		nptr++;
	return (toi(0, nptr, sign));
}

// static int	ft_atoi_special(int c, unsigned long ans, char *temp)
// {
// 	if (c == 1)
// 	{
// 		if ((ans == 922337203685477580 && (*temp == '8' || *temp == '9')))
// 			return (-1);
// 		else if (ans > 922337203685477580)
// 			return (-1);
// 		else
// 			return (ans * 10 + (*temp - '0'));
// 	}
// 	if (c == -1)
// 	{
// 		if ((ans == 922337203685477580 && *temp == '9'))
// 			return (0);
// 		else if (ans > 922337203685477580)
// 			return (0);
// 		else
// 			return ((-1) * (ans * 10 + (*temp - '0')));
// 	}
// 	return (0);
// }

// int	ft_atoi(const char *str)
// {
// 	unsigned long		ans;
// 	int					c;
// 	char				*temp;

// 	temp = (char *)str;
// 	while ((*temp >= 9 && *temp <= 13) || *temp == 32)
// 		temp++;
// 	c = 1;
// 	if (*temp == '+' || *temp == '-')
// 	{
// 		if (*temp == '-')
// 			c = -1;
// 		temp++;
// 	}
// 	ans = 0;
// 	while (*temp >= '0' & *temp <= '9')
// 	{
// 		ans = ans * 10 + (*temp - '0');
// 		temp++;
// 		if (ans >= 922337203685477580)
// 			return (ft_atoi_special(c, ans, temp));
// 	}
// 	return ((int)(ans * c));
// }

// int main()
// {
// 	printf("%d   \n", atoi("-9223372036854775805"));
// 	printf("%d\n", ft_atoi("-9223372036854775805"));
// }
