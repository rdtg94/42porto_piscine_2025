/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:31:12 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:22 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>

int main()
{
	char str1[] = "92315612";
	
	if (ft_str_is_numeric(str1))
		printf("The string '%s' is numeric.", str1);
	
	else
		printf("The string '%s' is NOT numeric.", str1);
} */