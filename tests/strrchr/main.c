#include <string.h>
#include <stdio.h>

int main ()
{
   const char str[] = "some random string";

   const char ch = 'm';
   const char ch2 = '\0';

   char *ret1;
   char *ret11;

   char *ret2;
   char *ret22;

   ret1 = strrchr(str, ch);
   ret11 = strrchr(str, ch2);
   ret2 = ft_strrchr(str, ch);
   ret22 = ft_strrchr(str, ch2);

    printf("Original function: \n");
   printf("String after |%c| is - |%s|\n", ch, ret1);
   //printf("address of pointer: %p\n\n", &ret1);
   printf("String after |%c| is - |%s|\n", ch2, ret11);
   //printf("address of pointer: %p\n\n", &ret11);

    printf("ft_strrchr: \n");
   printf("String after |%c| is - |%s|\n", ch, ret2);
   //printf("address of pointer: %p\n", &ret2);
   printf("String after |%c| is - |%s|\n", ch2, ret22);
   //printf("address of pointer: %p\n\n", &ret2);
   
   return(0);
}