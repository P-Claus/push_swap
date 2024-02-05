#include "../includes/actions.h"

int	main(void)
{
	int a[5] = {5, 2, 4, 8, 1};
//	int b[5] = {4, 8, 9, 4, 3};
	int	size_a;

	size_a = 0;

	while (a[size_a])
		size_a++;
	ft_printf("%d\n", size_a);



//int count = 0;
/*
	//ft_printf("Before ss\n\n");
	while (count < 5)
	{
		//ft_printf("%d", a[count]);
	//	ft_printf(" %d\n", b[count]);
		count++;
	}
	//ft_printf("- -\n");
	//ft_printf("a b\n");


	count = 0;
	//ft_printf("\n\nAfter ss\n\n");
	while (count < 5)
	{
	//	ft_printf("%d", a[count]);
	//	ft_printf(" %d\n", b[count]);
		count++;
	}
	//ft_printf("- -\n");
	//ft_printf("a b\n");
	//*/
	return (0);
}
