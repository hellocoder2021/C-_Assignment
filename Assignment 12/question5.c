#include <stdio.h>

void printEven(int);

int main(void) {
    
    int num;
    
    scanf("%d",&num);
    
    printEven(num);
    
	return 0;
}

void printEven(int n)
{
    if(n>=2)
    {
        printEven(n-1);
        
        if(n%2==0)
            printf("%d\t",n);
    }
}