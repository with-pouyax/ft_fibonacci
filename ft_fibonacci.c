#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fibo);
	}
}
int main(void)
{
    int index = 3;
    int result = ft_fibonacci(index);

    printf("Fibonacci of %d is %d\n", index, result);
    return (0);
}