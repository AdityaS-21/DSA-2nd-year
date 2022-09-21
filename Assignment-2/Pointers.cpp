#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int s,n;
    s = ( *a + *b);
    n=(*a - *b);
    if(n<0){
        n=(-n);
    }
    *a = s;
    *b = n;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
