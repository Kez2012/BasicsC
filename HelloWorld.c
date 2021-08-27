#include <stdio.h>

int main()
{
   printf("Hello World");
   int a,n,sum = 0,i;
   printf("How many numbers to be added?");
   scanf("%d",&n);
   for (i = 0;i<n;i++){
      printf("Enter no: ");
      scanf("%d",&a);
      sum = sum+ a;
   }
   printf("The sum is %d", sum);
   printf("GitHub works on Desktop");
   return 0;
}
