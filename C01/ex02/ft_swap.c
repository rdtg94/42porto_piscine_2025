/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:08:32 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/02/27 08:45:20 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* // TESTS
#include <stdio.h>

int 	main(void)
{
	int a = 42;
	int b = 24;

	printf("Before swap: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap: %d, %d\n", a, b);

	return (0);
} */
