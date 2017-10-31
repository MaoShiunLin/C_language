#include <stdio.h>

int main()
{
    int n,i,j,k,m;
    int inner_product = 0;
    int a[100], b[100];
    printf("Please enter the size of two arrays. \n");
    scanf("%d",&n);
    printf("Enter %d numbers in array a: \n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&(a[i]));
    }
    printf("Enter %d numbers in array b: \n",n);
    for(j = 0; j < n; j++)
    {
        scanf("%d",&(b[j]));
    }
    for(k = 0; k < n; k++)
    {
        inner_product += a[k]*b[k];
    }
    
    printf("The inner product of these two arrays is %d \n",inner_product);
    
    system("pause");
    
    
}
