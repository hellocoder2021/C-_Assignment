#include <stdio.h>

int power(int ,int);

int main(void) {
    int a ,b;
    
    scanf("%d %d",&a ,&b);
    
    printf("%d^%d : %d",a ,b ,power(a ,b));
    
	return 0;
}

int power(int a ,int b)
{
    if(b==0)
        return 1;
    
    return a*power(a,b-1);
}
