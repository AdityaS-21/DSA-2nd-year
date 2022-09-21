#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a , b ;
   float n , m ;

   scanf("%d %d",&a,&b);
   scanf("\n");
   scanf("%f %f", &n,&m);
   scanf("\n");
   printf("%d %d" , a+b , a-b);
   printf("\n");
   printf("%0.1f %0.1f" , n+m , n-m);
    
    return 0;
}
