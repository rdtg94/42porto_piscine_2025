/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:52:00 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:16 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
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
	
	if (ft_str_is_printable(str1))
		printf("The string '%s' is printable.", str1);
	
	else
		printf("The string '%s' is NOT printable.", str1);
} */