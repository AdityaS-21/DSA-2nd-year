#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int a=0;
    while(n!=0){
        a=a+n%10;
        n=n/10;
    }

    printf("%d",a);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
