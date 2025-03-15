/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 06:34:01 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/09 15:07:32 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>
int	main(void)
{
	printf("Fibonacci(0): %d\n", ft_fibonacci(0));
	printf("Fibonacci(1): %d\n", ft_fibonacci(1));
	printf("Fibonacci(2): %d\n", ft_fibonacci(2));
	printf("Fibonacci(3): %d\n", ft_fibonacci(3));
	printf("Fibonacci(4): %d\n", ft_fibonacci(4));
	printf("Fibonacci(5): %d\n", ft_fibonacci(5));
	printf("Fibonacci(-1): %d\n", ft_fibonacci(-1));
	return (0);
} */