/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:12:52 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/19 17:14:37 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	check_len(int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count += 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa2(char *res, long num, int len)
{
	if (num == 0)
		res[0] = '0';
	res[len] = '\0';
	while (num != 0)
	{
		res[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	len;
	long			num;

	len = check_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		num = n;
		num *= -1;
	}
	else
		num = n;
	return (ft_itoa2(res, num, len));
}

// int main()
// {
// 	int n = -2147483648;
// 	char *ans;
// 	ans = ft_itoa(n);
// 	printf("ans = %s\n",ans);
// }