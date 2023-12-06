#include <stdio.h>
int main()
{
	int num = 42;
    int num2 = -42;
    int num3 = 0;
    int num4 = -2147483648 ;
    long int num5 = 2147483648 ;
    
	ft_putnbr_fd(num, 1);
    printf("\n");
	ft_putnbr_fd(num2, 1);
    printf("\n");
    ft_putnbr_fd(num3, 1);
    printf("\n");
    ft_putnbr_fd(num4, 1);
    printf("\n");
	ft_putnbr_fd(num5, 1);
	return 0;
}