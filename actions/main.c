#include "../includes/actions.h"

int	main(void)
{
	int a[5] = {5, 2, 4, 8, 1};
	int b[5] = {4, 8, 9, 4, 3};
	int count = 0;

	ft_printf("Before ss\n\n");
	while (count < 5)
	{
		ft_printf("%d", a[count]);
		ft_printf(" %d\n", b[count]);
		count++;
	}
	ft_printf("- -\n");
	ft_printf("a b\n");

	ss(&a[0], &a[1], &b[0], &b[1]);

	count = 0;
	ft_printf("\n\nAfter ss\n\n");
	while (count < 5)
	{
		ft_printf("%d", a[count]);
		ft_printf(" %d\n", b[count]);
		count++;
	}
	ft_printf("- -\n");
	ft_printf("a b\n");
	return (0);
}
