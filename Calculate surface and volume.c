#include <stdio.h>
int main()
{
    int i,j,k;
    int surface,volume;
    printf("Please enter the height h:");
    scanf("%d",&i);
    printf("Please enter the width w:");
    scanf("%d",&j);
    printf("Please enter the long d:");
    scanf("%d",&k);
    surface = (i*j+j*k+i*k)*2;
    volume = i*j*k;

    printf("%d\n",surface);
    printf("%d\n",volume);
    system("pause");
}
