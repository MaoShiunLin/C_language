#include <stdio.h>

int main()
{
    int i,n;
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    printf("Please enter the size of fib. number:");
    scanf("%d",&n);
    for(i = 2; i <= n-1; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];  
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d ",(fib[i]));      
    }
    system("pause");
}
