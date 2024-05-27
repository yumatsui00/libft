/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:42 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/21 18:22:47 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*letsjoin(const char *s1, const char *s2, char *ans)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		ans[i] = s1[i];
	j = -1;
	while (s2[++j])
		ans[i + j] = s2[j];
	ans[i + j] = '\0';
	return (ans);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ans;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len + s2len == 0)
	{
		ans = (char *)malloc(sizeof(char) * 1);
		if (!ans)
			return (NULL);
		ans[0] = '\0';
		return (ans);
	}
	ans = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!ans)
		return (NULL);
	return (letsjoin(s1, s2, ans));
}

int main(){
	const char *test1;
	const char *test2 = "world";
	test1 = (char *)malloc(sizeof(char) * 10);
	printf("answer = %s\n", ft_strjoin(test1, test2));
}