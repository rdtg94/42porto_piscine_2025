/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:10:53 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:23 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
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
	
	if (ft_str_is_lowercase(str1))
		printf("The string '%s' is lowercase.", str1);
	
	else
		printf("The string '%s' is NOT lowercase.", str1);
} */