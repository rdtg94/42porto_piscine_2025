/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:12:43 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/04 21:25:15 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strncmp("abc", "abc", 3)); 
	printf("%d\n", ft_strncmp("abc", "abc", 3));  

	printf("%d\n", strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 3));

	printf("%d\n", strncmp("abc", "abb", 3));
	printf("%d\n", ft_strncmp("abc", "abb", 3));

	printf("%d\n", strncmp("abc", "abc", 2));
	printf("%d\n", ft_strncmp("abc", "abc", 2));

	printf("%d\n", strncmp("abc", "a", 1));
	printf("%d\n", ft_strncmp("abc", "a", 1));

	printf("%d\n", strncmp("abc", "abd", 2));
	printf("%d\n", ft_strncmp("abc", "abd", 2));

	printf("%d\n", strncmp("", "", 5));
	printf("%d\n", ft_strncmp("", "", 5));

	printf("%d\n", strncmp("abc", "abc", 0));
	printf("%d\n", ft_strncmp("abc", "abc", 0));

	return 0;
} */