/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:40:55 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:20 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>

int main()
{
	char str1[] = "vjklren1564er";
	
	if (ft_str_is_alpha(str1))
		printf("The string '%s' is alphabetic.", str1);
	
	else
		printf("The string '%s' is NOT alphabetic.", str1);
} */